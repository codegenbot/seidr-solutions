#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings;
    string substring, str;

    cout << "Enter number of strings: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter string: ";
        cin.ignore();
        getline(cin, str);
        strings.push_back(str);
    }

    cout << "Enter substring to filter: ";
    cin >> substring;

    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if (!filtered_strings.empty()) {
        for (const auto& str : filtered_strings) {
            cout << str << endl;
        }
    } else {
        cout << "No strings match the given substring." << endl;
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