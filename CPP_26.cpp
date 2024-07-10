bool issame(int a, int b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 4, 5};
    numbers = remove_duplicates(numbers);
    return 0;
}