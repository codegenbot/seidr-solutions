std::string removeVowels() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::string result = "";
    for (char c : text) {
        if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
            && std::tolower(c) != 'i' && std::tolower(c) != 'o'
            && std::tolower(c) != 'u')
            result += c; 
    }
    return result;