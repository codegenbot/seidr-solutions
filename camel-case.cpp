std::string input;

    while (true) {
        std::cout << "Enter a string in kebab-case (or 'q' to quit): ";
        std::cin >> input;
        if(input == "q") break; 
        std::cout << camelCase(input) << std::endl;
    }

    return 0;
}