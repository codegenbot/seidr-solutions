#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            vector<string> temp;
            temp.push_back(str);
            result.push_back(temp);
        }
    }
    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a[0].length() != b[0].length()) {
                 return a[0].length() < b[0].length();
             } else {
                 return a[0] < b[0];
             }
         });
    return result;
}

int main() {
    vector<string> lst = {"apple", "banana", "cherry"};
    vector<vector<string>> output = sorted_list_sum(lst);
    for (const auto& str : output) {
        if (issame(str, lst)) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
    return 0;
}