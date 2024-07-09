#include <algorithm>
#include <vector>
#include <string>

int main() {
    vector<string> list = {"aaaa", "bbbb", "dd", "cc"};
    string b = "";
    for (const auto& str : list) {
        if (str.length() % 2 == 0) {
            b += str + " ";
        }
    }
    b.pop_back();
    bool result = issame(sorted_list_sum(list), std::vector<string>(b.begin(), b.end()));
    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]})[0] != sorted_list_sum({b[i], a[i]})[0]) {
            return false;
        }
    }

    return true;
}

vector<std::string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}