#include <vector>
#include <algorithm>

vector<int> remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> numbers = {5, 2, 8, 5, 1, 2, 8, 9};
    numbers = remove_duplicates(numbers);
    // Further processing or output as needed
    return 0;
}