```cpp
#include <vector>
#include <algorithm>
#include <string>

typedef std::basic_string<char> string;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        vector<string> temp = {a[i], b[i]};
        sort(temp.begin(), temp.end());
        if (temp[0] != temp[1]) {
            return false;
        }
    }
    return true;
}

string sorted_list_sum(vector<string> input) {
    string result = "";
    for (const auto& str : input) {
        std::sort(str.begin(), str.end());
        result += str;
    }
    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}