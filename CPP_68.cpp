```
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v) {
    if(v.empty()) return true;
    for(int i = 1; i < v.size(); ++i)
        if(v[i] != v[0]) return false;
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    }

    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    bool same = issame(numbers);
    std::cout << "Are all elements the same? " << (same ? "Yes" : "No") << "\n";
    std::vector<int> result = pluck(numbers);
    for(int i: result) {
        std::cout << i << " ";
    }
    return 0;
}