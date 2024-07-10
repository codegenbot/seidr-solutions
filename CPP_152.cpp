int main() {
    const std::vector<int> expected = {0, 1, 1, 0};
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), expected));
    
    return 0;
}