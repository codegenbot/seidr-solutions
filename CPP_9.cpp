#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 2, 8};
    std::vector<int> result = rolling_max(numbers);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}