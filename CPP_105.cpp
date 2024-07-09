```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back({(i == 1 ? "One" : i == 2 ? "Two" : i == 3 ? "Three" : i == 4 ? "Four" : i == 5 ? "Five" : i == 6 ? "Six" : i == 7 ? "Seven" : i == 8 ? "Eight" : "Nine")});
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> final_result;
    for (vector<string> strings : result) {
        final_result.insert(final_result.end(), strings.begin(), strings.end());
    }
    return final_result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}