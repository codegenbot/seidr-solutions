int main_func() {
    int n;
    std::cin >> n;
    processInput(n);
    for (const auto& str : lst) {
        std::cout << str << std::endl;
    }
    return 0;
}