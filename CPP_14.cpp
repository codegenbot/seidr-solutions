#include <vector>
#include <string>

// Function to check if two vectors are same
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

const vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}