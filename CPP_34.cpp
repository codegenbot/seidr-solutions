```c++
bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main_test() {
    std::pmr::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = input; 
    auto uniqueOutput = std::unique(output.begin(), output.end()); 
    for (auto i = output.begin(); i != uniqueOutput; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    assert(issame({0, 2, 3, 5, 9, 123}, std::vector<int>(std::unique(input.begin(), uniqueOutput)->begin(), (uniqueOutput)->end())));
}