#include <algorithm>
#include <string>
#include <any>
#include <cassert>

using std::any;
using std::any_cast;
using std::max;
using std::string;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return max(str1, str2, [](const string& s1, const string& s2) { return s1 < s2; });
    }
    return any();
}

int main() {
    assert (any_cast<string>(compare_one(string("1"), string("None"))) == "None");
    return 0;
}