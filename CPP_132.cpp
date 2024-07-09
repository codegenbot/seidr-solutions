std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    bool result = is_nested(str);
    if (result) {
        std::cout << "The string is nested.\n";
    } else {
        std::cout << "The string is not nested.\n";
    }
    return 0;
}