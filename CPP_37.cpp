```cpp
std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (float i : l) {
        if (result.size() % 2 == 0) {
            std::vector<float> even_indices(result.begin(), result.end());
            std::sort(even_indices.begin(), even_indices.end());
            std::copy(even_indices.begin(), even_indices.end(), std::back_inserter(result));
        } else {
            result.push_back(i);
        }
    }
    return result;
}