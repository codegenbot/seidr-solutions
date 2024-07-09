#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> lst = {"aa", "bb", "cc", "dd"};
    vector<string> result1 = sorted_list_sum(lst);
    bool same = issame(sorted_list_sum({{"a", "b"}, {"c", "d"}}), {{"c", "d"}, {"a", "b"}});
    vector<string> lst2 = {{"a", "b"}, {"c", "d"}};
    vector<string> result2 = sorted_list_sum(lst2);
    for (const auto& str : result1) {
        bool found = false;
        for (const auto& str2 : result2) {
            if (str == str2) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Elements not present in the second list: ";
            for (const auto& str3 : result1) {
                bool found2 = false;
                for (const auto& str4 : result2) {
                    if (str3 == str4) {
                        found2 = true;
                        break;
                    }
                }
                if (!found2) {
                    cout << str3 << " ";
                }
            }
            cout << endl;
        } else {
            cout << "All elements are present in the second list." << endl;
        }
    }
}

vector<string> sorted_list_sum(vector<vector<string>> lst) {
    vector<string> result;
    for (const auto& sublst : lst) {
        string temp;
        for (const auto& str : sublst) {
            if (str.length() % 2 == 0) {
                temp += str + " ";
            }
        }
        temp.pop_back();
        if (!temp.empty()) {
            result.push_back(temp);
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