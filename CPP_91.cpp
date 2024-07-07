#include <iostream>
#include <string>
using namespace std;

size_t findPattern(const string& input) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != string::npos) {
        count++;
        pos += 8; 
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int result = findPattern(input);
    cout << "The count of 'I am bored' in your string is: " << result << endl;
    return 0;
}