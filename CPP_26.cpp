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
    vector<int> input = {1, 2, 2, 3, 4, 4, 5};
    vector<int> result = remove_duplicates(input);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}