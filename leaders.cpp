#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] >= arr[i-1]) res.push_back(arr[i]);
    }
    return res;

}

int main() {
    std::vector<int> arr = {1, 3, 4, 1, 5, 9};
    std::vector<int> result = leaders(arr);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}