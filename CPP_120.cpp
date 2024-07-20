#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int k = 3;
    std::vector<int> output = maximum(vec, k);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}