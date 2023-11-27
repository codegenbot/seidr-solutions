#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame function
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main() {
    // Test cases
    // assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}