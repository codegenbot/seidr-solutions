```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int smallestEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    result.push_back(smallestEven);
    result.push_back(index);

    return result;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 4, 5};
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    std::vector<int> arr = {10, 20, 30};
    std::vector<int> output = pluck(arr);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}