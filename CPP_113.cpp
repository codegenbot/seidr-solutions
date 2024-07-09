#include <vector>
#include <string>

bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> res;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string output = "the number of odd elements " + to_string(count) + " in the string " + s + " of the input.";
        res.push_back(output);
    }
    return res;
}

int main() {
    assert(issame("abc", "abc"));
}