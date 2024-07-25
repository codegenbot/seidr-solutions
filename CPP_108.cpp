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
    assert(count_nums({123, -456, 789, -1011}) == 4);
    assert(count_nums({0, 0, 0}) == 0);
    assert(count_nums({-123, -456, -789}) == 0);
    return 0;
}