int main() {
    std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    rescale_to_unit(input);

    assert(is_same(input, {0.25, 0.0, 1.0, 0.5, 0.75}));
}