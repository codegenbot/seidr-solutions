sort(nums.begin(), nums.end(), [](const int& num1, const int& num2) {
    int sum1 = abs(num1);
    while(num1) {
        sum1 += abs(num1%10);
        num1 /= 10;
    }
    int sum2 = abs(num2);
    while(num2) {
        sum2 += abs(num2%10);
        num2 /= 10;
    }
    return sum1 == sum2 ? find(nums.begin(), nums.end(), num1) < find(nums.begin(), nums.end(), num2) : sum1 < sum2;
});

return nums;