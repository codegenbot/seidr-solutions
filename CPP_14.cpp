#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    string str;
    cin >> str;
    
    vector<string> prefixes = all_prefixes(str);

    for (const string& prefix : prefixes) {
        cout << prefix << " ";
    }
    cout << endl;

    return 0;
}