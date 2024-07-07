#include <iostream>
#include <string>
using namespace std;

size_t findPattern(const string& input) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != string::npos) {
        if (pos == string::npos) break;
        count++;
        pos = input.find("I am bored", pos);
    }
    return count;

}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    size_t result = findPattern(input);
    if(result == 0)
        cout << "No pattern found." << endl;
    else
        cout << "The count of 'I am bored' in your string is: " << result << endl;
    return 0;
}