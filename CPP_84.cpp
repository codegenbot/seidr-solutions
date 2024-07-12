int main() {
    int N;
    std::cin >> N;
    std::cout << solve(N) << std::endl;

    assert(solve(963) == 483);
    return 0;
}