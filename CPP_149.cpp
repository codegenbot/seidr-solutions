#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (std::abs(std::hash<string>{}(a[i]) - std::hash<string>{}(b[i])) > 0) {
            return false;
        }
    }

    return true;
}

vector<std::string> sorted_list_sum(vector<string> lst) {
    vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
         [&](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> sortedListSum = sorted_list_sum(lst);
    std::vector<std::string> sortedList = {"cc", "dd", "aaaa", "bbbb"};
    if (!issame(sortedListSum, sortedList)) {
        // error
    } else {
        // no error
    }
    return 0;
}