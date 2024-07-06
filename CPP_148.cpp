std::vector<std::string> bf(std::string str1, std::string str2) {
    std::vector<std::string> result;
    for(int i = 0; i < str1.size(); i++) {
        for(int j = 0; j <= str2.size() - lenOfSubstring(str1.substr(i), str2); j++) {
            if(str2.substr(j, lenOfSubstring(str1.substr(i), str2)).compare(str1.substr(i)) == 0) {
                result.push_back(str1.substr(i));
                i = str1.size();
            }
        }
    }
    return result;
}

int lenOfSubstring(const std::string& sub) {
    for(int i = 0; i < sub.size(); i++) {
        if(sub[i] != str2[0]) {
            return i;
        }
    }
    return sub.size();
}