#include <vector>
#include <algorithm>

bool issame(vector<int>& a, vector<int>& b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
} 