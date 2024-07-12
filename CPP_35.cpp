int calculateMax() {
    int my_vector[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> vec(my_vector, my_vector + sizeof(my_vector) / sizeof(my_vector[0]));
    int max_val = *std::max_element(vec.begin(), vec.end());
    return std::abs(max_val);
}