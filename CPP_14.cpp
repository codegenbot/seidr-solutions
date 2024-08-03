#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    // Your main function code goes here
    return 0;
}