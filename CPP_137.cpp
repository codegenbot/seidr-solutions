#include <iostream>
#include <string>

using namespace std;

int compare_strings(string a, string b) {
    if (a > b)
        return 1; 
    else if (b > a)
        return -1; 
    else
        return 0; 
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int result = compare_strings(str1, str2);

    if (result > 0)
        cout << "Greater string is: " << str1 << endl;
    else if (result < 0)
        cout << "Greater string is: " << str2 << endl;
    else
        cout << "Both strings are equal" << endl;

    return 0;
}