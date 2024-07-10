#include <iostream>
#include <vector>
#include <string>

bool issame(string a, string b) {
    if(a.length() != b.length()) {
        return false;
    }
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    vector<string> all_prefixes(string str) {
        vector<string> result;
        for (int i = 1; i <= str.length(); ++i) {
            result.push_back(str.substr(0, i));
        }
        return result;
    }

    vector<string> prefix_list = all_prefixes(str);
    string target_str;
    cin >> target_str;

    for(string s : prefix_list) {
        if(issame(s, target_str)) {
            cout << "The prefix is: " << s << endl;
        }
    }

    return 0;
}