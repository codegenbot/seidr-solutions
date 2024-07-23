int main() {
    std::vector<int> nums = {10, 2, 5, 3};
    int target = 7;
    std::pair<int, int> pair = findPair(nums, target);
    if (pair.first == -1 && pair.second == -1) {
        std::cout << "No such pair found." << std::endl;
    } else {
        std::cout << "The pair is: " << pair.first << ", " << pair.second << std::endl;
    }
}  // Add this closing }
    return 0;