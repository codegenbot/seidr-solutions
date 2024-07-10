#include <iostream>
int main() {
    std::vector<float> numbers;
    float num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    numbers = {num1, num2, num3};
    std::vector<std::pair<float, float>> result = find_closest_elements(numbers);
    for (const auto &p : result) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    return 0;
}

bool std::issame(std::vector<std::pair<float, float>> a, std::vector<std::pair<float, float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i].first - a[i].second) != std::abs(b[i].first - b[i].second)) {
            return false;
        }
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    auto closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < std::abs(closest_pair.first - closest_pair.second)) {
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return { {closest_pair.first, closest_pair.second} };