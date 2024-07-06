#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    int sum_a = 0;
    int sum_b = 0;

    for (const auto& str : a) {
        sum_a += static_cast<int>(str[0]);
    }

    for (const auto& str : b) {
        sum_b += static_cast<int>(str[0]);
    }

    return sum_a == sum_b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (issame({str}, {})) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}