#include <any>
#include <iostream>
#include <string>

using namespace std;

std::any compare(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (std::any_cast<int>(a) >= std::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (std::any_cast<float>(a) >= std::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (std::stof(std::any_cast<string>(a)) >= std::stof(std::any_cast<string>(b))) ? a : b;
    }

    return a; // Handle other types, return the first argument by default
}

int main() {
    std::any input1, input2;
    cin >> std::any_cast<int>(input1) >> std::any_cast<int>(input2);
    cout << std::any_cast<int>(compare(input1, input2)) << endl;

    return 0;
}