#include <iostream>
#include <string>
#include <algorithm>
#include <any>
using namespace std;

double convertToDouble(const string &s) {
    string temp = s;
    replace(temp.begin(), temp.end(), ',', '.');
    return stod(temp);
}

std::any compare_one(std::any a, std::any b) {
    double valA, valB;

    if (a.type() == typeid(int))
        valA = std::any_cast<int>(a);
    else if (a.type() == typeid(float))
        valA = std::any_cast<float>(a);
    else if (a.type() == typeid(string))
        valA = convertToDouble(std::any_cast<string>(a));
    
    if (b.type() == typeid(int))
        valB = std::any_cast<int>(b);
    else if (b.type() == typeid(float))
        valB = std::any_cast<float>(b);
    else if (b.type() == typeid(string))
        valB = convertToDouble(std::any_cast<string>(b));

    if (valA > valB)
        return a;
    else if (valB > valA)
        return b;
    else
        return string("None");
}

int main() {
    auto result = compare_one(5, string("4,9"));
    if (result.type() == typeid(int))
        cout << std::any_cast<int>(result) << endl;
    else if (result.type() == typeid(string))
        cout << std::any_cast<string>(result) << endl;
    else if (result.type() == typeid(float))
        cout << std::any_cast<float>(result) << endl;
    else
        cout << std::any_cast<double>(result) << endl;

    return 0;
}