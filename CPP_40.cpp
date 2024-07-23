#include <iostream>
#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}