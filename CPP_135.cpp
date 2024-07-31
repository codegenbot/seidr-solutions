```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    if(arr.empty()) {
        return -1;
    }
    int max = *std::max_element(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        if((arr[i] + i) > (max + 1)) {
            return -1;
        }
    }
    return 1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::cout << can_arrange({1,2,3,4,5}) << std::endl;
}