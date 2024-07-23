int main() {
    std::string str;
    std::cin >> str;
    std::string chars;
    std::cin >> chars;
    std::vector<std::string> result = reverse_delete(str, chars);
    for (auto s : result) {
        std::cout << s << "\n";
    }
    return 0;
}