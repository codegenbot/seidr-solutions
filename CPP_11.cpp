try {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter the second string: ";
    std::cin >> str2; // read the initial characters
    str2 += '\n';  // add the newline character manually
    std::getline(std::cin, str2); // now you can safely get the remaining line

    try {
        std::string result = string_xor(str1, str2);
        std::cout << "XOR of the two strings is: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
} catch (...) { 
    std::cout << "An error occurred." << std::endl;
}