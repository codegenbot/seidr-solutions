```cpp
std::string result;
for (char c : words[0]) {
    result += std::tolower(c);
}
for (int i = 1; i < words.size(); i++) {
    if (std::isupper(words[i][0])) {
        result += std::string(1, std::toupper(words[i][0]));
    } else {
        result += std::string(1, words[i][0]);
    }
    for (char c : words[i].substr(1)) {
        result += std::tolower(c);
    }
}
return result;