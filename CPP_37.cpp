```cpp
bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-5) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& input) {
    std::vector<float> even_numbers;
    for (float num : input) {
        if (num >= 0 && std::abs(num - static_cast<int>(num)) < 1e-5) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
}

int main() { 
    int n;
    std::vector<float> input;
    float num;
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        input.push_back(num);
    }
    std::cin.ignore();
    for (float val : sort_even(input)) {
        std::cout << val << " ";
    }
}