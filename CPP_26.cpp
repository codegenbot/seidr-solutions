#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    vector<int> result = remove_duplicates(input);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}