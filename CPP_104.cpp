bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> numbers) {
    std::unordered_set<int> uniqueDigits;
    for (int num : numbers) {
        while (num > 0) {
            uniqueDigits.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(uniqueDigits.begin(), uniqueDigits.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>{1, 3, 5}));
    return 0;
}