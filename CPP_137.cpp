#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

any convert_to_float(any value) {
    if (value.type() == typeid(int)) {
        return static_cast<float>(any_cast<int>(value));
    } else if (value.type() == typeid(float)) {
        return any_cast<float>(value);
    } else if (value.type() == typeid(string)) {
        string str = any_cast<string>(value);
        replace(str.begin(), str.end(), ',', '.');
        return stof(str);
    }
    return 0.0f; // Default fallback
}

any compare_one(any a, any b) {
    float fa = any_cast<float>(convert_to_float(a));
    float fb = any_cast<float>(convert_to_float(b));
    
    if (fa > fb) return a;
    if (fa < fb) return b;
    return string("None");
}

int main() {
    any a, b;
    string inputA, inputB;

    cout << "Enter first value: ";
    cin >> inputA;
    try {
        a = stoi(inputA);
    } catch (...) {
        try {
            a = stof(inputA);
        } catch (...) {
            a = inputA;
        }
    }

    cout << "Enter second value: ";
    cin >> inputB;
    try {
        b = stoi(inputB);
    } catch (...) {
        try {
            b = stof(inputB);
        } catch (...) {
            b = inputB;
        }
    }

    any result = compare_one(a, b);
    if (result.type() == typeid(string)) {
        cout << any_cast<string>(result) << endl;
    } else if (result.type() == typeid(int)) {
        cout << any_cast<int>(result) << endl;
    } else if (result.type() == typeid(float)) {
        cout << any_cast<float>(result) << endl;
    }

    return 0;
}