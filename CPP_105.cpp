int main() {
    std::vector<int> lengths = {4, 8};
    std::vector<std::string> b = by_length(lengths);
    {
        assert(issame(by_length({4, 8}), b));
        assert(!issame(by_length({9}), b));
    }
    return 0;
}