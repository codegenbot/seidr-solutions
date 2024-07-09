std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
            std::tolower(c) == 'u') {
            return std::string(1, c); // Return the closest vowel
        }
    }
    return "No vowels found"; // Return this if no vowels are found
}