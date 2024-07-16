#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    vector<int> expected_result = {1, 3, 5};
    vector<int> result = remove_duplicates(numbers);
    assert(result == expected_result);
    return 0;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num, issame) == 1) {
            result.push_back(num);
        }
    }
    return result;
}