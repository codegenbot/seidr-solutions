#include <iostream>
#include <vector>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string res = "the number of odd elements " + to_string(oddCount) + " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137",  "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));

    return 0;
}