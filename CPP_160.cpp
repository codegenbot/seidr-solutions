int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * std::stoll(nums[i].c_str());
        } else if (ops[i] == "-") {
            result -= temp * std::stoll(nums[i].c_str());
        } else if (ops[i] == "*") {
            temp *= std::stoll(nums[i].c_str());
        } else if (ops[i] == "/") {
            temp /= std::stoll(nums[i].c_str());
        } else if (ops[i] == "^") {
            temp = pow(temp, std::stoll(nums[i].c_str()));
        }
    }

    return result;
}