int main() {
    std::string s;
    int n;
    std::cin >> s >> n;

    std::vector<std::string> words = select_words(s, n);

    for (const auto& word : words) {
        std::cout << word << " ";
    }
    
    return 0;
}