```cpp
#include <iostream>
#include <string>

using namespace std;

string compare_one(string a, string b) {
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        return "None";
}

int main() {
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;
    cout << "Greater or equal one is: " << compare_one(a, b) << endl;
    return 0;
}