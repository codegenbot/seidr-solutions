#include <vector>

int basementIndex(const std::vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    std::vector<int> arr;
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    arr.resize(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    int result = basementIndex(arr);
    if (result != -1) {
        std::cout << "The basement index is: " << result << std::endl;
    } else {
        std::cout << "No such index exists" << std::endl;
    }
    return 0;
}