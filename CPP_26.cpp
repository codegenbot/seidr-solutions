int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> result = remove_duplicates(numbers);
    assert(result == vector<int>({1, 2, 3, 4, 5}));
}