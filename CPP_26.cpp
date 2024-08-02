```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 1, 2, 3};
    vector<int> same = remove_duplicates(numbers);
    for (int num : same) {
        std::cout << num << " ";
    }
    return 0;
}