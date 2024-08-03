int main() {
    int n;
    std::cin >> n;
    std::vector<int> stones = make_a_pile(n);
    std::vector<int> expected = {4, 5, 6, 7, 8, 9};
    bool result = issame(stones, expected);
    std::cout << (result ? "Success" : "Failure");
    
    return 0;
}