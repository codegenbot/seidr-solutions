int main() {
    std::vector<int> numbers = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert(isSame(numbers, {1, 2, 3, 4, 5}));
}