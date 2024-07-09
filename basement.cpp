```cpp
#include <vector>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = basement(v);
    if (result != -1)
        printf("The basement is at index %d.\n", result);
    else
        printf("There is no basement.\n");
    return 0;
}