#include <vector>
#include <unordered_map>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> unique_numbers(numbers.begin(), numbers.end());
    return vector<int>(unique_numbers.begin(), unique_numbers.end());
}