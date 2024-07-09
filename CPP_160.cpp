if (ops[i] == "/") {
    temp /= static_cast<long long>(nums[i]);
} else if (ops[i] == "^") {
    temp = static_cast<long long>(pow(temp, nums[i]));
}