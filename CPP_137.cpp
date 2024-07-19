#include <iostream>
#include <string>

using namespace std;

int compare_one(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    string str1, str2;
    cout << "Enter first number: ";
    cin >> str1;
    cout << "Enter second number: ";
    cin >> str2;

    int num1 = stoi(str1);
    int num2 = stoi(str2);

    if (num1 > num2)
        cout << "Greater number is: " << num1 << endl;
    else
        cout << "Greater number is: " << num2 << endl;

    return 0;
}