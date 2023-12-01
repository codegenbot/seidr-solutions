#include <any>
#include <string>
#include <cassert>

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2) {
            return str1;
        } else if (str2 > str1) {
            return str2;
        }
    }
    return any(std::string("None"));
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    assert(any_cast<int>(compare_one(2, 3)) == 3);
    assert(any_cast<int>(compare_one(5, 3)) == 5);
    assert(any_cast<string>(compare_one(string("abc"), string("def"))) == "def");
    assert(any_cast<string>(compare_one(string("xyz"), string("abc"))) == "xyz");

    return 0;
}