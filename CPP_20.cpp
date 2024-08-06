std::vector<float> find_closest_elements(std::vector<float> elements) {
    std::sort(elements.begin(), elements.end());
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_elements;

    for (size_t i = 0; i < elements.size() - 1; ++i) {
        float diff = std::abs(elements[i] - elements[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {elements[i], elements[i + 1]};
        }
    }

    return closest_elements;
}