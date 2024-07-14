#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = 0; i < n; i++) { 
        bool is_leader = true;
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] <= arr[j]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    std::vector<int> arr = {18, 380, 989, 546, 355, 24, 277, 7, 827, 802, 193, 479, 225, 923, 32, 606, 909, 926, 584};
    std::vector<int> leaders_arr = leaders(arr);
    for (int i : leaders_arr) {
        std::cout << i << " ";
    }
    return 0;
}