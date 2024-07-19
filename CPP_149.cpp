```cpp
int newMain() {
    std::vector<std::string> lst;
    std::string str;
    std::cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        std::getline(std::cin, str);
        if (str == "stop") break;
        std::istringstream iss(str);
        std::string word;
        while (std::getline(iss, word, ' ')) {
            lst.push_back(word);
        }
    }
    std::vector<std::vector<std::string>> expected = sorted_list_sum(lst);
    assert(issame(expected, {{"cc"}, {"dd"}, {"aaaa"}, {"bbbb"}}));
    return 0;
}