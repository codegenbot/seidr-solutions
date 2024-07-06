int main_func() {
    std::vector<std::any> values = {10, 20, 'a', 'b', 30.5f, "hello"};
    std::vector<int> output = filter_integers(values);
    for (const auto& num : output) {
        std::cout << num << "\n";
    }
}