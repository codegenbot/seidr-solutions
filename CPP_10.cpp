```cpp
#include <string>
#include <iostream>
using namespace std;

string make_palindrome(string input) {
    string output = input;
    reverse(output.begin(), output.end());
    return input.replace(' ', '') + output.replace(' ', '');
}

int main() {
    string input, output;
    cout << "Enter a string: ";
    cin >> input;
    output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
    return 0;
}