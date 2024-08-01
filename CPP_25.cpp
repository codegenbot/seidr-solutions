// Replace 'vector<int>' with 'std::vector<int>'
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

// Add 'std::' before 'vector<int>' in the main function
int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}