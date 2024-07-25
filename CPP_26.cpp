#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {2, 3, 1, 2, 5, 3, 4, 1};
    numbers = remove_duplicates(numbers);
    return 0;
}