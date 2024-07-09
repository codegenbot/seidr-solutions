int main() {
    std::vector<float> input(10);
    input.push_back(5.0f);
    input.push_back(8.0f);
    input.push_back(-12.0f);
    input.push_back(4.0f);
    input.push_back(23.0f);
    input.push_back(2.0f);
    input.push_back(3.0f);
    input.push_back(11.0f);
    input.push_back(12.0f);
    input.push_back(-10.0f);

    std::cout << "Original array: ";
    for (float num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<float> sortedEven = myspace::sort_even(input);
    std::cout << "Sorted even array: ";
    for (float num : sortedEven) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}