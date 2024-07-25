```cpp
#include <string>
#include <iostream>
using namespace std;

string make_palindrome(string input) {
    string reversed = "";
    for(int i=input.length()-1; i>=0; i--) {
        reversed += input[i];
    }
    return input + reversed;
}

int main() {
    string input, output;
    cout << "Enter a string: ";
    getline(cin, input);  
    output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
    return 0;
}