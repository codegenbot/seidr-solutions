#include <string>
#include <iostream>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) any_cast<int>(a) < (float) any_cast<float>(b) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        float f = any_cast<float>(a);
        return f > stod(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = any_cast<int>(a);
        int i2 = any_cast<int>(b);
        return i1 < i2 ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(a);
        float f = any_cast<float>(b);
        return stod(str) > f ? a : b;
    }
    else {
        return "None";
    }
}

int main() {
    std::any a = 10; // replace with your input
    std::any b = 20.5; // replace with your input
    std::cout << compare_one(a, b) << std::endl;
}