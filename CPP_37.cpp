int main() {
    std::vector<int> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<int> even_numbers = sort_even(numbers);
    assert(issame(even_numbers, {2, 4, 8, 12}));
    return 0;
}