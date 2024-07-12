int main() {
    std::vector<std::vector<int>> q = {{1}};
    int w = 2;
    std::cout << (will_it_fly(q, w) ? "The plane will fly." : "The plane won't fly.") << std::endl;
    return 0;