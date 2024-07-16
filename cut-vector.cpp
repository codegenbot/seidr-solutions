#include <iostream>

int n = vec.size();
int idx = 0;
int min_diff = INT_MAX;
for (int i = 1; i < n; ++i) {
    int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
    if (diff < min_diff) {
        idx = i;
        min_diff = diff;
    }
}

for (int i = 0; i < idx; ++i) {
    std::cout << vec[i] << std::endl;
}
std::cout << std::endl;
for (int i = idx; i < n; ++i) {
    std::cout << vec[i] << std::endl;
}