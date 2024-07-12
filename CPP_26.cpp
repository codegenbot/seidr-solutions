int main() {
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (issame(test1, {1, 2, 3, 4, 5}));
    return 0;
}