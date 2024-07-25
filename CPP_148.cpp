bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {"Saturn", "Uranus"}));

    return 0;
}