#include <algorithm>
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

int sorted_list_sum(vector<string> lst) {
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
    int sum = 0;
    for(const auto &str : result) {
        sum += str.length();
    }
    return sum;
}

int main() {
    vector<string> lst = {"aa", "bb", "cc", "dd"};
    int sum = sorted_list_sum(lst);
    bool same = same(sorted({{"a", "b"}, {"c", "d"}}), sorted({{"c", "d"}, {"a", "b"}}));
    return 0;
}

vector<string> sorted(vector<string> lst) {
    vector<string> result = lst;
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