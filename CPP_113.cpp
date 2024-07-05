#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

// Corrected odd_count function
vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char ch : str) {
            if ((ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) +
                     " in the string is " + to_string(odd_count);
        result.push_back(res);
    }
    return result;
}

// Helper function to compare vectors of strings
bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string is 2",
        "the number of odd elements 3 in the string is 3",
        "the number of odd elements 2 in the string is 2"
    }));
    cout << "All tests passed!" << endl;
    return 0;
}