Here is the completed code:

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a string of words separated by commas or spaces: ";
    cin >> s;
    vector<string> res = words_string(s);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}