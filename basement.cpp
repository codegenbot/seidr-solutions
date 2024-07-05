#include <iostream>
#include <vector>

int basement(std::vector<int>& v) {
    int i = 0;
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return i + 1;
}