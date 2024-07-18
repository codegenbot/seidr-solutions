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
    vector<int> input = {1, 2, 3, 3, 4, 5, 5, 6};
    vector<int> uniqueNumbers = remove_duplicates(input);

    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }

    return 0;
}