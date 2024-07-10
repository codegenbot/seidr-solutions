bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), std::map<char, int>{{'a', 1}}));

    return 0;
}