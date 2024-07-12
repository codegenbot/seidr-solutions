vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 3, 4, 5};
    vector<int> unique_numbers = remove_duplicates(numbers);
    if (issame(numbers, unique_numbers)) {
        cout << "Duplicates removed successfully." << endl;
    } else {
        cout << "Failed to remove duplicates." << endl;
    }

    return 0;
}