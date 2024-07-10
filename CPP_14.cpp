```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> all_prefixes(const string& input) {
    vector<string> result;
    for (int i = 0; i <= input.size(); ++i) {
        result.push_back(input.substr(0, i+1)); 
    }
    return result;
}

int mainFunc() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (input.empty()) {
        cout << "Invalid input. Please enter a non-empty string." << endl;
    } else {
        vector<string> result = all_prefixes(input);
        if (!issame(result)) {
            cout << "The prefixes are not the same." << endl;
        } else {
            cout << "The prefixes are the same." << endl;
        }
    }

    vector<string> www = all_prefixes("WWW");
    if (!issame(www)) {
        cout << "The prefixes are not the same." << endl;
    } else {
        cout << "The prefixes are the same." << endl;
    }

    return 0;
}