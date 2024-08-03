#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    vector<string> result;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });

    return result;
}

int main() {
    vector<string> test1 = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> test2 = {"cc", "dd", "aaaa", "bbbb"};
    assert(sorted_list_sum(test1) == test2);
    
    // Test your function with different inputs here
    return 0;
}