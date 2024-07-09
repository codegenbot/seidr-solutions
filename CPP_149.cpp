```cpp
#include <algorithm>
#include <vector>
#include <string>

int main() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    sort(input.begin(), input.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    assert(issame(input));
    return 0;
}

bool issame(const vector<string>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (sorted_sum({lst[i - 1], lst[i]})[0] != sorted_sum({lst[i], lst[i - 1]})[0]) {
            return false;
        }
    }

    return true;
}

vector<int> sorted_sum(const vector<string>& lst) {
    vector<int> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            int sum = 0;
            for (char c : str) {
                sum += static_cast<int>(c);
            }
            result.push_back(sum);
        }
    }

    sort(result.begin(), result.end());
    return result;
}