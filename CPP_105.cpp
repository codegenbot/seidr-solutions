bool vector_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(vector_same(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));
    return 0;
}