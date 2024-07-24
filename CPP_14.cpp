#include <vector>
#include <string>

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Function implementation
}

int main() {
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);
    for (const auto& prefix : prefixes) {
        cout << prefix << " ";
    }
    return 0;
}