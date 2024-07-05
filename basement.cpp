#include "basement.cpp"

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No negative sum found." << std::endl;
    } else {
        std::cout << "First index with a negative sum is: " << result << std::endl;
    }
    return 0;
}