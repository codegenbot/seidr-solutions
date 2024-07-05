#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

std::any string_to_number(const string& s) {
    string s_copy = s;
    replace(s_copy.begin(), s_copy.end(), ',', '.');
    try {
        return std::stod(s_copy);
    } catch (const std::invalid_argument&) {
        return s; // If conversion fails, return original string
    }
}

std::any compare_one(std::any a, std::any b) {
    auto get_value = [](const std::any& v) -> std::any {
        if (v.type() == typeid(int)) return std::any_cast<int>(v);
        if (v.type() == typeid(float)) return std::any_cast<float>(v);
        if (v.type() == typeid(double)) return std::any_cast<double>(v);
        if (v.type() == typeid(string)) return string_to_number(std::any_cast<string>(v));
        return v;
    };

    auto va = get_value(a);
    auto vb = get_value(b);

    if (va.type() == typeid(double) && vb.type() == typeid(double)) {
        double da = std::any_cast<double>(va);
        double db = std::any_cast<double>(vb);
        if (da == db) return "None";
        return da > db ? a : b;
    }

    if (va.type() == typeid(string) && vb.type() == typeid(string)) {
        string sa = std::any_cast<string>(va);
        string sb = std::any_cast<string>(vb);
        if (sa == sb) return "None";
        return sa > sb ? a : b;
    }

    return "None";
}

int main() {
    std::string a, b;
    cin >> a >> b;
    std::any result = compare_one(a, b);
    if (result.type() == typeid(std::string)) {
        cout << std::any_cast<std::string>(result);
    } else {
        cout << "None";
    }
}