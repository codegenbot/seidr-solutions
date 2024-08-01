```cpp
std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(), 
                                    [&words](const std::string& a, const std::string& b) {
                                        return (a.length() != b.length()) ? 
                                            a.length() < b.length() : a.compare(b);
                                    });
    return max_word;
}