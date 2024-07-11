bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));