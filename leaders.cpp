int main() {
    std::vector<int> nums;
    int num;

    while (!std::cin.eof() && std::cin >> num) {
        nums.push_back(num);
    }

    ...
}