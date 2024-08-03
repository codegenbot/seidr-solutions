bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(split("ahmed,gamal", ','), {"ahmed", "gamal"}));
    return 0;
}