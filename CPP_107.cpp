bool are_vectors_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

...

    assert(are_vectors_equal(result, even_odd_palindrome(n)));