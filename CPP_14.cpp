#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
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

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    vector<string> prefixes = all_prefixes(str);
    cout << "Prefixes of the string are: ";
    for (string prefix : prefixes) {
        cout << prefix << " ";
    }
    bool same = issame(prefixes, all_prefixes("WWW"));
    if (same) {
        cout << "\nAll strings have same prefixes.";
    } else {
        cout << "\nStrings do not have same prefixes.";
    }
    return 0;
}