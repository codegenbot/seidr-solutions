#include <algorithm>
#include <vector>

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> result = numbers;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}