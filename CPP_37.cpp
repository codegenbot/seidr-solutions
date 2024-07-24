```cpp
std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even(vec.size() / 2); 
            for (int j = 0; j < vec.size(); j++) {
                if (j % 2 == 0) {
                    even.push_back(vec[j]);
                }
            }
            std::sort(even.begin(), even.end());
            result.push_back(even[0]);
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}