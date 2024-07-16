#include <iostream>
#include <string>
#include <variant>

using namespace std;

variant<int, float, string> compare_one(any a, any b) {
    if (holds_alternative<int>(a) && holds_alternative<float>(b)) {
        int i = get<int>(a);
        float f = get<float>(b);
        return i > f ? variant<int, float, string>(i) : variant<int, float, string>(f);
    }
    else if (holds_alternative<float>(a) && holds_alternative<string>(b)) {
        float f = get<float>(a);
        string str = get<string>(b);
        return f > stod(str) ? variant<int, float, string>(f) : variant<int, float, string>(str);
    }
    else if (holds_alternationg<string>(a) && holds_alternative<string>(b)) {
        string str1 = get<string>(a);
        string str2 = get<string>(b);
        return stod(str2) > stod(str1) ? variant<int, float, string>(str2) : (stod(str1) == stod(str2)) ? variant<int, float, string>("None") : variant<int, float, string>(str1);
    }
    else if (holds_alternative<int>(a) && holds_alternative<string>(b)) {
        int i = get<int>(a);
        string str = get<string>(b);
        return stod(str) > i ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (holds_alternative<string>(a) && holds_alternationg<int>(b)) {
        string str = get<string>(a);
        int i = get<int>(b);
        return stod(str) > i ? variant<int, float, string>(str) : (i == stod(str)) ? variant<int, float, string>("None") : variant<int, float, string>(i);
    }
    else if (holds_alternative<float>(a) && holds_alternationg<int>(b)) {
        float f = get<float>(a);
        int i = get<int>(b);
        return f > i ? variant<int, float, string>(f) : variant<int, float, string>(i);
    }
    else if (holds_alternative<int>(a) && holds_alternationg<float>(b)) {
        int i = get<int>(a);
        float f = get<float>(b);
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