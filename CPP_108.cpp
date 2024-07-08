```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0; // declare sum here
        bool negativeFound = false;
        while (num > 0 || (negativeFound && num < 0)) {
            int digit = abs(num) % 10;
            if ((digit > 1) || (digit == 1 && !negativeFound))
                sum += digit;
            else
                negativeFound = true;
            num /= 10;
        }
        if (sum > 0)
            count++;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    vector<int> nums = {5, -2, -4, 3, 11};
    cout << "Number of integers that are nice: " << count_nums(nums) << endl;
}