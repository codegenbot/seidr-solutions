```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings;
    string substring;

    cout << "Enter the list of strings (separated by space): ";
    getline(cin, substring);
    strings = {substring};

    cout << "Enter another string to check: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    if(issame({substring}, result)) {
        cout << "The entered string is in the list." << endl;
    } else {
        cout << "The entered string is not in the list." << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}