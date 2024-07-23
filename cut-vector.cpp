```cpp
#include <vector>
#include <iostream>

int main() {
    int cutIndex = 0;
    int minDiff = INT_MAX;

    std::vector<int> v; 

    std::cin >> v.size();
    v.resize(v.size());
    for(int i = 0; i < v.size(); i++) {
        std::cin >> v[i];
    }

    for(int i = 1; i < v.size(); i++) {
        int diff = std::abs(v[i] - v[i-1]);
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return std::make_pair(std::vector<int>(v.begin(), v.begin() + cutIndex),
                       std::vector<int>(v.begin() + cutIndex, v.end()));
}