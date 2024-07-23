```cpp
#include <vector>

int basement(const std::vector<int>& vec) {
    int sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    return basement(std::vector<int>{-1,2,3,-2,5});
}