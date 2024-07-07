#include <iostream>
#include <string>
using namespace std;

size_t findPattern(const string& input) {
    size_t count = 0;
    size_t pos = input.find("I am bored");
    while (pos != string::npos) {
        count++;
        pos = input.replace(pos, 8, "I am bored");
    }
    return count;

}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int result = findPattern(input);
    if(result == 0)
        cout << "No pattern found." << endl;
    else
        cout << "The count of 'I am bored' in your string is: " << result << endl;
    return 0;
}