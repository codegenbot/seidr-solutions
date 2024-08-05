int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> leaders = findLeaders(nums);
    
    std::cout << "Leaders: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    
    return 0;
}