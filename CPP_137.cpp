#include <iostream>
#include <string>
#include <algorithm>
#include <any>
#include <sstream>
using namespace std;

std::any convert_to_float(std::any value) {
    if (value.type() == typeid(int)) {
        return static_cast<float>(std::any_cast<int>(value));
    } else if (value.type() == typeid(float)) {
        return std::any_cast<float>(value);
    } else if (value.type() == typeid(string)) {
        string str = std::any_cast<string>(value);
        replace(str.begin(), str.end(), ',', '.');
        return stof(str);
    }
    return 0.0f; // Default fallback
}

std::any compare_one(std::any a, std::any b) {
    float fa = std::any_cast<float>(convert_to_float(a));
    float fb = std::any_cast<float>(convert_to_float(b));
    
    if (fa > fb) return a;
    if (fa < fb) return b;
    return string("None");
}

int main() {
    std::any a, b;
    a = 5; // Example inputs
    b = string("4.5");
    
    std::any result = compare_one(a, b);
    
    try {
        cout << std::any_cast<string>(result) << endl;
    } catch (const std::bad_any_cast&) {
        try {
            cout << std::any_cast<int>(result) << endl;
        } catch (const std::bad_any_cast&) {
            try {
                cout << std::any_cast<float>(result) << endl;
            } catch (const std::bad_any_cast&) {
                cout << "None" << endl;
            }
        }
    }
    
    return 0;
}