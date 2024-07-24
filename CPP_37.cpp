```cpp
std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            bool flag = true;
            float temp = vec[i];
            for (int j = i + 1; j < vec.size(); j += 2) {
                if (temp > vec[j]) {
                    temp = vec[j];
                }
            }
            result.push_back(temp);
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}