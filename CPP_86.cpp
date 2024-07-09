```cpp
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string str) {
    string result = "";
    int start = 0;
    for(int i = 0; i < str.length(); i++) {
        if(i > start && isalpha(str[i])) {
            result += str[i];
            start = i;
        }
    }
    return result;
}

int main() { 
    string userInput;
    cout << "Enter a sentence: ";
    getline(cin, userInput);
    if(userInput.empty()) {
        cout << "Error: Please enter a valid sentence." << endl;
    } else {
        string result = anti_shuffle(userInput);
        cout << "Anti-shuffled sentence: " << result << endl;
    }
    return 0;
}