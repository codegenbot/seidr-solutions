```cpp
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<int>& l) {
    std::vector<float> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back((float)num); 
        }
    }
    return result;
}