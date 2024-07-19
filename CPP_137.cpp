#include <iostream>
#include <string>
#include <limits>

using namespace std;

int compare_one(int a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

int compare_one(float a, string b) {
    stof(b);
    if (a > stod(b))
        return a;
    else
        return stod(b);
}

int compare_one(string a, string b) {
    stof(a);
    stof(b);
    if (stod(a) > stod(b))
        return stod(a);
    else
        return stod(b);
}

int compare_one(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int compare_one(string a, float b) {
    if (stod(a) > b)
        return stod(a);
    else
        return b;
}

int compare_one(int a, string b) {
    if (a > stod(b))
        return a;
    else
        return stod(b);
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
        cout << "Greater number is: " << num1 << endl;
    else
        cout << "Greater number is: " << num2 << endl;

    return 0;
}