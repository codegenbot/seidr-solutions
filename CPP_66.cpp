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
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 99);
    int num = digitSum(string(s));
    cout << "Sum of digits: " << num << endl;
    return 0;
}