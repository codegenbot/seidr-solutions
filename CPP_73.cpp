#include <vector>

int smallest_change(std::vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return (arr.size() * (arr.size() + 1) / 2) - sum;
}

int main() { 
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << smallest_change(arr) << std::endl;
    return 0;
}