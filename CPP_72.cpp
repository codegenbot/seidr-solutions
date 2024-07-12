int main {
    std::vector<std::vector<int>> q = {{1,2},{3,4}};
    int w = 10;
    if (!will_it_fly(q, w)) {
        std::cout << "It won't fly.\n";
    } else {
        std::cout << "It will fly.\n";
    }
    return 0;
}