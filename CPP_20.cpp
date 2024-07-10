```cpp
std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest_pairs;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (!issame(numbers[i], numbers[i + 1])) {
            pair<float, float> p = make_pair(numbers[i], numbers[i + 1]);
            closest_pairs.push_back(p);
        }
    }
    
    return closest_pairs;
}