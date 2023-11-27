#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string flip_case(string str){
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else if (isupper(str[i])) {
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    string flipped = flip_case(input);
    
    cout << "Flipped case: " << flipped << endl;
    
    return 0;
}