#include <iostream>
#include <string>
#include <boost/variant.hpp>

using namespace std;
using namespace boost;

variant<int, float, string> compare_one(any a, any b) {
    if (a.type() == type_id<int>() && b.type() == type_id<float>()) {
        return get<int>(a.convert_to<any>()) > get<float>(b.convert_to<any>()) ? variant<int, float, string>(get<int>(a.convert_to<any>())) : variant<int, float, string>(get<float>(b.convert_to<any>()));
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<string>()) {
        float f = get<float>(a.convert_to<any>());
        string str = get<string>(b.convert_to<any>());
        return f > stod(str) ? variant<int, float, string>(f) : variant<int, float, string>(str);
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        string str1 = get<string>(a.convert_to<any>());
        string str2 = get<string>(b.convert_to<any>());
        return stod(str2) > stod(str1) ? variant<int, float, string>(str2) : (stod(str1) == stod(str2)) ? variant<int, float, string>("None") : variant<int, float, string>(str1);
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<string>()) {
        int i = get<int>(a.convert_to<any>());
        string str = get<string>(b.convert_to<any>());
        return stod(str) > i ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<int>()) {
        string str = get<string>(a.convert_to<any>());
        int i = get<int>(b.convert_to<any>());
        return stod(str) > i ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<int>()) {
        float f = get<float>(a.convert_to<any>());
        int i = get<int>(b.convert_to<any>());
        return f > i ? variant<int, float, string>(f) : variant<int, float, string>(i);
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<float>()) {
        int i = get<int>(a.convert_to<any>());
        float f = get<float>(b.convert_to<any>());
        return i > f ? variant<int, float, string>(i) : variant<int, float, string>(f);
    }
    else {
        return a == b ? variant<int, float, string>("Equal") : variant<int, float, string>("Not Equal");
    }
}

int main() {
    any a = 5;
    any b = "10.0";
    variant<int, float, string> result = compare_one(a, b);

    if (holds_alternative<int>(result)) {
        int i = get<int>(result);
        cout << "The result is: " << i << endl;
    }
    else if (holds_alternative<float>(result)) {
        float f = get<float>(result);
        cout << "The result is: " << f << endl;
    }
    else {
        string str = get<string>(result);
        cout << "The result is: " << str << endl;
    }

    return 0;
}