int main() {
    assert(equalVectors(selectWords("a b c d e f", 1), std::vector<std::string>{ {"b","c","d","f"}}));
    return 0;
}