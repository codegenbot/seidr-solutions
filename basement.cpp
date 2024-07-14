#include <vector>

int basement(const std::vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;

}

int main() {
    // Test your function here
    std::vector<int> arr = {-5, 1, -3, 4};
    int result = basement(arr);
    if(result == -1)
        std::cout << "No negative sum found.\n";
    else
        std::cout << "First index of negative sum is: " << result << "\n";
    return 0;
}