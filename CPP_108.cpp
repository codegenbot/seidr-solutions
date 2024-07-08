```cpp
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0;
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
    vector<int> input;
    int number;
    cout << "Enter numbers (negative to finish): ";
    while (cin >> number) {
        input.push_back(number);
    }
    cout << "The count is: " << count_nums(input) << endl;
}