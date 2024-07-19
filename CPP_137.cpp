#include <iostream>
#include <string>

using namespace std;

string compare_one(int a, int b) {
    if (a > b)
        return "First number is greater";
    else
        return "Second number is greater";

}

int main() {
    string str;
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
        str = "Greater number is: " + to_string(num1) + endl;
    else
        str = "Greater number is: " + to_string(num2) + endl;

    cout << str;
    return 0;
}