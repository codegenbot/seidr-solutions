bool are_vectors_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    
    for (int i = 1; i <= n; ++i) {
        result.push_back(i);
    }
    
    for (int i = n - 1; i > 0; --i) {
        result.push_back(i);
    }
    
    return result;
}

...

    assert(are_vectors_equal(result, even_odd_palindrome(n));