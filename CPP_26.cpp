int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    remove_duplicates(input);
    assert(issame(input, {1, 4, 5}));

    return 0;
}