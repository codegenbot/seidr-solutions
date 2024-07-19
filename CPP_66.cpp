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
    char* s = new char[100];
    int num;
    cout << "Enter a string: ";
    cin.getline(s, 99); 
    num = digitSum(string(s));
    cout << "Sum of digits: " << num << endl;
    delete[] s; 
    return 0;
}