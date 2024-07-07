#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare_one(int a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a;
    float b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The larger number is: " << compare_one(a, b) << endl;
    return 0;
}