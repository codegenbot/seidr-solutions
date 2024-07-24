```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    int j = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            while (j < vec.size() && j % 2 != 0) {
                j++;
            }
            for (; j < vec.size() && j % 2 == 0; j++) {
                result.push_back(vec[j]);
            }
        } else {
            result.push_back(vec[i]);
            if (i < vec.size() - 1)
                j++;
        }
    }
    return result;
}