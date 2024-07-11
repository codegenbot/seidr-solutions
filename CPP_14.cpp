#include <string>

vector<string> all_prefixes(string b) {
    vector<string> result;
    string prefix = "";
    for (char c : b) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    // Test the all_prefixes function
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);
    for (string prefix : prefixes) {
        cout << prefix << " ";
    }
    return 0;
}