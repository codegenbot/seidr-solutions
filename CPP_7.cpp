```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    vector<string> strings;
    cout << "Enter number of strings: ";
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cout << "Enter string " << i+1 << ": ";
        getline(cin, s);
        strings.push_back(s);
    }
    
    string substring;
    cout << "Enter the substring: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    if(result.empty()) {
        cout << "No strings contain the substring: " << substring << endl;
    } else {
        cout << "Strings that contain the substring: " << substring << ":";
        for(const auto& s : result) {
            cout << "\n" << s;
        }
    }

    if(!issame({substring}, {string ""})) {
        vector<string> new_strings;
        for(const auto& s : strings) {
            if(issame({s}, {substring})) {
                new_strings.push_back(s);
            }
        }
        cout << "\nStrings that are the same as the substring: " << substring << ":";
        for(const auto& s : new_strings) {
            cout << "\n" << s;
        }
    } else {
        cout << endl;
    }

    return 0;
}