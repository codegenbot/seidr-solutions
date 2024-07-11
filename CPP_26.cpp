```c++
#include <unordered_set>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}