int main() {
    std::vector<float> input = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float result = max_element(input);
    std::cout << result << std::endl;
    return 0;
}