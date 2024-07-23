int main() {
    int x, y;
    std::cin >> x >> y;
    assert(x + y == add(x, y));
    return 0;
}