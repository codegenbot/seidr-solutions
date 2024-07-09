#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        string sum1 = sorted_list_sum({a[i], b[i]});
        string sum2 = sorted_list_sum({b[i], a[i]});

        if (sum1[0] != sum2[0]) {
            return false;
        }
    }

    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end());

    return result;
}