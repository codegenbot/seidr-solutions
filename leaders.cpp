int main() {
    std::vector<int> nums;
    int num;

    while (!std::cin.eof() && std::cin >> num) {
        nums.push_back(num);
    }

    if (nums.empty()) {
        std::cout << "No numbers entered." << std::endl;
        return 1;
    }

    std::vector<int> result = findLeaders(nums);

    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}