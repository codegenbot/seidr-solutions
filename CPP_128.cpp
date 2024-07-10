int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    bool hasZero = false;
    for (int num : arr) {
        if (num == 0) hasZero = true;
        else sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }
    return (hasZero ? 0 : sign * sum);
}