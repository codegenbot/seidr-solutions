bool issame(std::vector<int> a, std::vector<int> b); // Function signature update

int main() {
    assert(issame(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3})); // Correct argument types
    return 0;
}