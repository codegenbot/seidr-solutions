int count_nums(const vector<int>& n) {
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
    vector<int> nums = {123, -456, 789, -101, 0};
    assert(count_nums(nums) == 4);
    return 0;
}