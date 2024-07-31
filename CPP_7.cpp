std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
    std::string sub = "an";
    
    std::vector<std::string> filtered_strings = filter_by_substring(strings, sub);

    assert(is_same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").at(0), "grunt");
    assert(is_same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").at(1), "prune");
    
    for (const std::string& str : filtered_strings) {
        if (is_same(str, sub)) {
            std::cout << str << " contains substring " << sub << std::endl;
        }
    }