int main() {
    std::string s1 = reverse_delete("mamma", "mia");
    std::string s2 = "mama";
    
    bool isSame = checkEquality(s1, "True");
    std::string s1_trimmed = s1.erase(std::remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    std::string s2_trimmed = s2.erase(std::remove_if(s2.begin(), s2.end(), ::isspace), s2.end());
    
    if(isSame) {
        std::cout << s1_trimmed << " and " << s2_trimmed << " are the same." << std::endl;
    } else {
        std::cout << s1_trimmed << " and " << s2_trimmed << " are not the same." << std::endl;
    }
    return 0;
}