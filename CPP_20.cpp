std::vector<float> find_closest_elements(std::vector<float> elements) {
    std::vector<float> closest_elements;
    if (elements.size() < 2) {
        return closest_elements;
    }

    std::sort(elements.begin(), elements.end());

    float min_diff = elements[1] - elements[0];
    closest_elements.push_back(elements[0]);
    closest_elements.push_back(elements[1]);

    for (size_t i = 2; i < elements.size(); ++i) {
        float diff = elements[i] - elements[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements.clear();
            closest_elements.push_back(elements[i - 1]);
            closest_elements.push_back(elements[i]);
        }
    }

    return closest_elements;
}