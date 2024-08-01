```cpp
vector<char> unique_chars;
for (char c : str) {
    if (tolower(c) != tolower(unique_chars[0])) {
        unique_chars.push_back(c);
    }
}
return unique_chars.size();