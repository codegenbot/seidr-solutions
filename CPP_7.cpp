#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<string> strings;
    string substring;

    cout << "Enter the number of strings: ";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }

    cout << "Enter the substring to filter by: ";
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if(result.empty()) {
        cout << "No strings contain the given substring." << endl;
    } else {
        vector<string> same_strings;
        for(auto str : strings) {
            if(issame(result, vector<string>(str.begin(), str.end()))){
                same_strings.push_back(str);
            }
        }

        if(same_strings.empty()) {
            cout << "No strings contain the same substring as the given string." << endl;
        } else {
            cout << "Strings that contain the same substring are: ";
            for(auto s : same_strings) {
                cout << s << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}