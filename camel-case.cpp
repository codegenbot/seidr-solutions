```c++
std::string result = tolower(words[0]);
for (int i = 1; i < words.size(); i++) {
    result += (std::isupper(words[i][0]) ? std::string(1, std::toupper(words[i][0])) : std::string(1, words[i][0])) + words[i].substr(1);
}