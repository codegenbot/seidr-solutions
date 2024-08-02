bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> vec_a = largestSmallestIntegers(a);
    std::vector<int> vec_b = largestSmallestIntegers(b);

    return vec_a == vec_b;
}