#include <string>
#include <iostream>
using namespace std;

string make_palindrome(string input) {
    string output = input;
    reverse(output.begin(), output.end());
    return input + output;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
    return 0;