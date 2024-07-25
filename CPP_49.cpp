int main() {
    int n, p;
    std::cin >> n >> p;
    assert(Solution::modp(n, p) == 3);
    std::cout << Solution::modp(n, p) << std::endl;
    return 0;
}