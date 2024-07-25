bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), std::vector<int>{3, 3, 3, 100, 100}));
    
    return 0;
}