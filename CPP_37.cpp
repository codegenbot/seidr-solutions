bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(std::vector<float>& arr) {
    std::sort(arr.begin(), arr.end(), [](float a, float b) {
        if (a % 2 == 0 && b % 2 == 0) {
            return a < b;
        } else if (a % 2 == 0) {
            return true;
        } else {
            return false;
        }
    });
}

int main() {
    std::vector<float> numbers = {2, 5, 4, 7, 6, 1, 3, 8};
    sort_even(numbers);
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}