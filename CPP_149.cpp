```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> list) {
    sort(list.begin(), list.end());
    for (auto it = list.begin(); it != list.end(); ++it) {
        *it = to_string(stoi(*it));
    }
    return list;
}