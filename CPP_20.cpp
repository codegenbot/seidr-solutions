int main 
{ 
    std::vector<float> numbers;
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    std::vector<std::pair<float, float>> closest_pairs = find_closest_elements(numbers);
    if (!closest_pairs.empty()) {
        for (const auto& pair : closest_pairs) {
            std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}