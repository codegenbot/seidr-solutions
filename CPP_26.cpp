bool issame(int a, int b) {
    return a == b;
}

void remove_duplicates(vector<int>& numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    remove_duplicates(numbers);
    return numbers;
}