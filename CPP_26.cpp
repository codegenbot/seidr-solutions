#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

void remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
}

int main() {
    vector<int> numbers = {2, 4, 2, 1, 5, 4, 6, 2};
    remove_duplicates(numbers);
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}