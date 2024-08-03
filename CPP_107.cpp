bool are_vectors_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i % 2 == 1 ? i / 2 + 1 : n - i / 2 + 1);
    }
    return result;
}

int main() {
    assert(are_vectors_equal(result, even_odd_palindrome(n)));
    return 0;
}