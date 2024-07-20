// Update function signatures
bool issame(const std::vector<int>& a, const std::vector<int>& b);
std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b);

// Update main function definition
int main() {
    assert(issame(std::vector<int>({1, 2, 3, 5}), std::vector<int>({-1, 2, 3, 4})));
    return 0;
}