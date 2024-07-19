#include <iostream>
#include <string>

using namespace std;

int digitSum(const string& s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int num = digitSum(s);
    cout << "Sum of digits: " << num << endl;
}