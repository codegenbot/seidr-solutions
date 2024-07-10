#include <iostream>
#include <vector>
#include <algorithm>

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {3, 1, 2, 1, 5, 2, 4};
    
    vector<int> result = remove_duplicates(numbers);
    
    vector<int> expected_result = {1, 2, 3, 4, 5};
    
    if (issame(result, expected_result)) {
        std::cout << "Output matches expected result." << std::endl;
    } else {
        std::cout << "Output does not match expected result." << std::endl;
    }
    
    return 0;
}