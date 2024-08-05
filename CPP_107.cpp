bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(even_odd_palindrome(1), {0, 1}));
    return 0;
}