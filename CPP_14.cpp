int main() {
    std::vector<std::string> b = {"W", "W", "W"};
    assert(assert_prefixes(all_prefixes("WWW"), {"W", "WW", "WWW"}));
}