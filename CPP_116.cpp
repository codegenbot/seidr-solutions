#include <vector>
#include <algorithm>

bool issame(int a, int b){
    return a == b;
}

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
}

int main() {
    std::vector<int> arr = {2,4,8,16,32};
    sort_array(arr);
    for(int i : arr) {
        std::cout << i << " ";
    }
    assert(issame(*std::max_element(arr.begin(), arr.end()), *std::min_element(arr.begin(), arr.end())));
    return 0;
}