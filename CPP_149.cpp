#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> list) {
    vector<string> result;
    for (const auto& str : list) {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        bool found = false;
        for (const auto& res_str : result) {
            if (res_str == sorted_str) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(sorted_str);
        }
    }
    return result;
}

int main() {
    vector<string> b = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    assert(issame(b, {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}