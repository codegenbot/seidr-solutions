int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::vector<std::string> prefixes = all_prefixes(str);

    for (const auto& prefix : prefixes) {
        std::cout << prefix << " ";
    }
    std::cout << "\n";

    return 0;
}