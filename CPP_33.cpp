int main() {
    assert(issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({1, 2, 3, 4, 5, 6, 8, 9}));
    assert(!issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}