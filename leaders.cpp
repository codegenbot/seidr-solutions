#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_left = arr[0];
    for (int i = 0; i < n; i++) { 
        if (arr[i] >= max_left) {
            res.push_back(arr[i]);
            max_left = arr[i];
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