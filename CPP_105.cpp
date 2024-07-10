bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), std::vector<std::string>{"Nine", "Four", "Eight"}));
    return 0;
}