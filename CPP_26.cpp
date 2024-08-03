int main() {
    std::vector<int> input;
    input = {1, 2, 3, 2, 4, 3, 5};
    remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}