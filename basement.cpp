int basement(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    std::vector<int> v = {1, 2, -3};
    int result = basement(v);
    std::cout << "The first index such that the sum of all integers from the start of the vector to that index is negative: " << result << std::endl;
    return 0;
}