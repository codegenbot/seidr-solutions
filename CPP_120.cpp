#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        // Erase the first occurrence of max_val
        auto it = arr.begin();
        while(it != arr.end()) {
            if(*it == max_val) {
                arr.erase(it);
                break;
            }
            ++it;
        }
    }
    return result;

}

int main() {
    std::vector<int> test = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}