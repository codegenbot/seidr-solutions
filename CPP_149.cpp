```cpp
#include <algorithm>
#include <string>
#include <vector>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        string merged = a[i] + b[i];
        string sortedMerged = merged;
        std::sort(sortedMerged.begin(), sortedMerged.end());
        if (sortedMerged != merged) return false;
    }
    return true;
}