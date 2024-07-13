int mainFunction() {
    std::cout << "Result: ";
    for (const auto& str : sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    if (!issame(std::vector<std::string>({"cc", "dd", "aaaa", "bbbb"}), {"cc", "dd", "aaaa", "bbbb"}))
        return 1;
    return 0;
}