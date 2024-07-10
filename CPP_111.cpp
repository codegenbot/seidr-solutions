std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> hist;
    for (char c : str) {
        hist[c]++;
    }
    return hist;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), std::map<char, int>{{'a', 1}}));

    return 0;
}