int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> test_input = {123, -456, 789, -101};
    assert(count_nums(test_input) == 3);
    
    return 0;
}