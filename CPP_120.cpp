#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the number of maximum elements to find: ";
    std::cin >> k;
    
    if(k > n) {
        k = n;
    }
    
    std::vector<int> arr(n);
    for(int i=0; i<n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> arr[i];
    }
    
    std::vector<int> result = maximum(arr, k);
    std::cout << "Maximum " << k << " elements are: ";
    for(int i=0; i<k; i++) {
        std::cout << result[i] << " ";
    }
    return 0;
}