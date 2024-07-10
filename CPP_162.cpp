std::string input;
    std::cout << "Enter your string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 of the entered string is: " << myString_to_md5(input.c_str()) << std::endl;
    return 0;
}