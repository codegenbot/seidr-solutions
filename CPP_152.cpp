int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), std::vector<int>({0, 1, 1, 0})));
    return 0;
}