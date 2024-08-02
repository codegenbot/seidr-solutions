Here is the completed code:

#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.size()) {
        if (str[i] == '-') {
            // skip -
            i++;
            continue;
        }
        
        if (result != "") {
            // capitalize first letter of each new word
            result[0] -= 'a' - 'A';
        } else {
            result = str.substr(i);
            i += result.size();
        }
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << kebabToCamel(input) << endl;
    return 0;
}