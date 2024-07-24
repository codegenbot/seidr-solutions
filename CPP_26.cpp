```
bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    return std::vector<int>(unique_numbers.begin(), unique_numbers.end());
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));