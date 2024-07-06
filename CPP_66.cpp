```cpp
int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += static_cast<int>(c) - static_cast<int>('0');
        }
    }
    return sum;
}