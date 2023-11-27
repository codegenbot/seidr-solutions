#include<iostream>
#include<vector>
#include<string>
using namespace std;
string int_to_mini_roman(int number) {
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    int i = 0;
    while (number > 0) {
        int count = number / nums[i];
        number = number % nums[i];
        while (count > 0) {
            result += roman[i];
            count--;
        }
        i++;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    string roman = int_to_mini_roman(number);
    cout << roman << endl;
    return 0;
}