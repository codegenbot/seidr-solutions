std::string remove_vowels(std::string text) {
    return {{ std::remove_if(text.begin(), text.end(), 
        [](char c){return "aeiouAEIOU".find(c) != std::string::npos;}) , text.end()};
}