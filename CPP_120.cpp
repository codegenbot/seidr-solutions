#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    sort(arr.begin(), arr.end(), std::greater<int>());
    int k = 5;
    arr.resize(k);
    return arr;
}