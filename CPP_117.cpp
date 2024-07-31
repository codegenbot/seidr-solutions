int main() {
    std::string s;
    int n;
    std::cin >> s >> n;

    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"})); 
    assert(issame(select_words(s, n), select_words(s, n)));

    return 0;
}