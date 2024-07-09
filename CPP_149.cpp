#include <algorithm>
#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    return a == b;
}

int sameCount = 0;

int main() {
    vector<string> lst1 = {"aa", "bb", "cc", "dd"};
    vector<string> result1 = sortedListSum(lst1);
    
    vector<string> lst2 = {{"a", "b"}, {"c", "d"}};
    vector<string> result2 = sortedListSum(lst2);
    bool same = isSame(result1, std::vector<std::string>(result2.rbegin(), result2.rend()));
    
    return 0;
}

vector<string> sortedListSum(vector<string> lst) {
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