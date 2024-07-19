#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> seen;
    std::vector<int> result(std::move(numbers)); // Assuming you want to remove duplicates from input vector itself.

    for (int num : numbers) {
        if (std::find_if(result.begin(), result.end(), [&](int n){return n == num;}) == result.end()) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return std::move(result); // Return the modified vector
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>{1, 2, 3, 4, 5});
    return 0;
}