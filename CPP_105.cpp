```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> numVec;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numVec.push_back(i < 5 ? "One" : (i < 8 ? "Two" : "Three"));
        }
    }
    sort(numVec.begin(), numVec.end());
    reverse(numVec.begin(), numVec.end());
    return numVec;
}