int main_test() {
    std::string input;
    std::cout << "Enter parentheses sequence: ";
    std::getline(std::cin, input);

    std::vector<char> lst;
    for (char c : input) {
        lst.push_back(c);
    }

    bool result = match_parens(lst);
    
    return 0;

    std::cout << (result ? "Yes" : "No");
}