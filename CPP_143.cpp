int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << words_in_sentence(sentence);
    return 0;
}