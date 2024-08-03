    std::string input;
    std::cout << "Enter the string to compute MD5 hash: ";
    std::cin >> input;

    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5_hash << std::endl;

    return 0;