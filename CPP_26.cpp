#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    vector<int> unique_nums = remove_duplicates(nums);

    for (int num : unique_nums) {
        std::cout << num << " ";
    }

    return 0;
}