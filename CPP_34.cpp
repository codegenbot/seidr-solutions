bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main_test() {
    std::pmr::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> output(input.begin(), input.end()); 
    auto uniqueOutput = std::unique(output.begin(), output.end()); 
    for (auto i = output.begin(); i != uniqueOutput; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    assert(issame(std::vector<int>(std::unique(input.begin(), uniqueOutput)->begin(), (uniqueOutput)->end()), {0, 2, 3, 5, 9, 123}));
}