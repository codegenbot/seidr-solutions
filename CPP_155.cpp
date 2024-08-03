bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> even_odd_count(int n) {
    return {n % 2, n};
}