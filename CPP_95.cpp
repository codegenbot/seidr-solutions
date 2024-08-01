std::map<std::string, int> dict1 = {{"apple", 1}, {"PEAR", 2}, {"Banana", 3}};
    std::map<std::string, int> dict2 = {{"orange", 1}, {"grape", 2}, {"watermelon", 3}};

    std::cout << std::boolalpha;
    std::cout << check_dict_case(dict1) << std::endl;
    std::cout << check_dict_case(dict2) << std::endl;

    return 0;