```cpp
int main() {
    std::vector<std::string> lst;
    std::cout << "Enter strings separated by spaces: ";
    for(std::string s; std::getline(std::cin, s), !s.empty();)
        lst.push_back(s);
    bool result = match_parens(lst);

    std::cout << (result ? "Yes\n" : "No\n");

    return 0;
}