bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}