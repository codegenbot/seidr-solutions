for(const auto& [key, value] : dict) {
    for(char c : key) {
        if(std::islower(c)) {
            hasUpper = false;
        } else if(std::isupper(c)) {
            hasLower = false;
        }
    }
}