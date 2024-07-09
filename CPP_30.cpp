int main() {
    std::vector<float> input;
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    std::vector<float> result = get_positive(input);
    assert(issame(result, {0.5f, 1.0f, 2.0f}));
    return 0;

}

std::vector<float> issame(std::vector<float> a, std::vector<float> b) {