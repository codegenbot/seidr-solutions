int main() {
    std::vector<float> numbers;
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    numbers.resize(0); 
    numbers.reserve(numbers.size());
    
    std::vector<std::pair<float, float>> closest_pairs;
    closest_pairs.reserve(numbers.size()); 
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (issame(numbers[i], numbers[i + 1])) continue;
        float gap = numbers[i + 1] - numbers[i];
        if (gap < 0.001) {
            closest_pairs.push_back({numbers[i], numbers[i + 1]});
        }
    }
    if (!closest_pairs.empty()) {
        for (const auto& pair : closest_pairs) {
            std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}