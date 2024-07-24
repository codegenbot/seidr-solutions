```cpp
std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            // Create a temporary vector to store the even elements.
            std::vector<float> temp;
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                temp.push_back(vec[j]);
            }
            // Sort the temporary vector.
            std::sort(temp.begin(), temp.end());
            // Replace even elements in result with the sorted ones.
            int k = 0;
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                result.push_back(temp[k++]);
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}