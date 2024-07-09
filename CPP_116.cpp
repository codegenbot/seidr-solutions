std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> arrCopy = arr;  // Create a copy of the input vector
    std::sort(arrCopy.begin(), arrCopy.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
    return arrCopy;
}