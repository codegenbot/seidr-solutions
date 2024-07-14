#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_right = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return res;
}

std::vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9};
std::vector<int> leaders_arr = leaders(arr);
for (int i : leaders_arr) {
    std::cout << i << " ";
}