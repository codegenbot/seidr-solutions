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

vector<const char*> all_prefixes(const string& input) {
    vector<const char*> result;
    for (int i = 0; i <= input.size(); ++i) {
        result.push_back(input.substr(0, i+1).c_str()); 
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
        if (!issame(vector<string>(result.begin(), result.end()))) {
            cout << "The prefixes are not the same." << endl;
        } else {
            cout << "The prefixes are the same." << endl;
        }
    }

    vector<const char*> www = all_prefixes("WWW");
    if (!issame(www)) {
        cout << "The prefixes are not the same." << endl;
    } else {
        cout << "The prefixes are the same." << endl;
    }

    return 0;
}