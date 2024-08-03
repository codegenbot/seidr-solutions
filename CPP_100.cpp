int main() {
    int n;
    std::cin >> n;

    assert(issame(make_a_pile(n), std::vector<int>({ n, n + 2, n + 4, n + 6, n + 8, n + 10, n + 12, n + 14 } ));

    return 0;
}