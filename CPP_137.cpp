#include <iostream>
#include <string>
#include <algorithm>
#include <any>
using namespace std;

any string_to_number(const string& s) {
    string s_copy = s;
    replace(s_copy.begin(), s_copy.end(), ',', '.');
    try {
        return stod(s_copy);
    } catch (const invalid_argument&) {
        return s;
    }
}

any compare_one(any a, any b) {
    auto get_value = [](const any& v) -> any {
        if (v.type() == typeid(int)) return any_cast<int>(v);
        if (v.type() == typeid(float)) return any_cast<float>(v);
        if (v.type() == typeid(double)) return any_cast<double>(v);
        if (v.type() == typeid(string)) return string_to_number(any_cast<string>(v));
        return v;
    };

    auto va = get_value(a);
    auto vb = get_value(b);

    if (va.type() == typeid(double) && vb.type() == typeid(double)) {
        double da = any_cast<double>(va);
        double db = any_cast<double>(vb);
        if (da == db) return "None";
        return da > db ? a : b;
    }

    if (va.type() == typeid(string) && vb.type() == typeid(string)) {
        string sa = any_cast<string>(va);
        string sb = any_cast<string>(vb);
        if (sa == sb) return "None";
        return sa > sb ? a : b;
    }

    return "None";
}

int main() {
    any result = compare_one(string("10"), string("25"));
    if (result.type() == typeid(string))
        cout << any_cast<string>(result) << endl;
    else if (result.type() == typeid(double))
        cout << any_cast<double>(result) << endl;

    if (any_cast<string>(compare_one(string("1"), 1)) == "None")
        cout << "Check passed" << endl;
    else
        cout << "Check failed" << endl;

    return 0;
}