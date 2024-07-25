#include <string>
#include <iostream>
#include <ostream>

using namespace std;

string make_palindrome(string input) {
    string reversed = input;
    reverse(reversed.begin(), reversed.end());
    return input + reversed;
}

int main() {
    string input, output;
    cout << "Enter a string: ";
    cin >> input;
    output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
    return 0;
}