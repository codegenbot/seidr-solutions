#include <iostream>
#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr) {
    std::vector<int> unique;
    std::vector<int> non_unique;
    for (int i : arr) {
        auto it = std::find(non_unique.begin(), non_unique.end(), i);
        if (it == non_unique.end()) {
            unique.push_back(i);
        } else {
            non_unique.push_back(i);
        }
    }
    unique.insert(unique.end(), non_unique.begin(), non_unique.end());
    
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = unique[i];
    }
    
    int maxIndex = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            maxIndex = i - 1;
        }
    }
    return maxIndex;
}