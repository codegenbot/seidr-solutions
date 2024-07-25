#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; ++i) {
        if ((arr[i] & (arr[i + 1] - 1)) != 0)
            return {};
    }
    return arr;
}

int main() {
    std::vector<int> a = {2,4,8,16,32};
    std::vector<int> b = sort_array(a);
    if(issame(b,{2,4,8,16,32}))
        std::cout << "The arrays are the same";
    else
        std::cout << "The arrays are not the same";

    return 0;
}