bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> rescaled = rescale_to_unit(numbers);

    std::vector<float> expected_numbers = {0.0, 0.25, 0.5, 0.75, 1.0};
    bool same = issame(rescaled, expected_numbers);

    if (same) {
        std::cout << "Arrays are the same." << std::endl;
    } else {
        std::cout << "Arrays are different." << std::endl;
    }

    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    return 0;
}