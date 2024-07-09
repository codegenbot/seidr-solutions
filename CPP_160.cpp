int do_algebra(vector<char> ops, vector<int> nums) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == '+') {
            result += temp * nums[i];
        } else if (ops[i] == '-') {
            result -= temp * nums[i];
        } else if (ops[i] == '*') {
            temp *= nums[i];
        } else if (ops[i] == '/') {
            temp /= nums[i];
        } else if (ops[i] == '^') { // For exponentiation
            temp = pow((double)temp, (double)nums[i]);
        }
    }

    return result;
}