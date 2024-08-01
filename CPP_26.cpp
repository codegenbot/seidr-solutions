```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> result = remove_duplicates(numbers);
    assert(issame(result, {1, 4, 5}));
    return 0;
}