```cpp
std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    int i = 0, j = 0;

    while (i < vec.size()) {
        if (i % 2 == 0) { // even-indexed elements
            for (; j < vec.size(); j++) {
                if (j % 2 == 0) {
                    result.push_back(vec[j]);
                }
            }
            std::sort(result.begin(), result.end());
            while (!result.empty()) {
                vec[i++] = result.back();
                result.pop_back();
            }
        } else { // odd-indexed elements
            vec[i++] = vec[j++];
        }
    }

    return vec;
}