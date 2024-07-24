```cpp
std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> temp;
            int j = i;
            while (j < vec.size() && j % 2 == 0) {
                temp.push_back(vec[j++]);
            }
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
                j++;
            }
            while (j < vec.size()) {
                result.push_back(vec[j++]);
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}