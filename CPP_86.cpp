```cpp
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(const string& str) {
    string result = "";
    int start = 0;
    for(int i = 0; i < str.size(); i++) {
        if(i > start && isalpha(str[i])) {
            result += str[i];
            start = i;
        }
    }
    return result;
}

int main() { 
    using namespace std;
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    if(str.empty()) {
        cout << "Error: Please enter a valid sentence." << endl;
    } else {
        cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    }
    return 0;
}