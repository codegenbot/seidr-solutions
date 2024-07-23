```cpp
int left = 0;
for (int right = word.size() - 1; right >= 0; --right) {
    if (!isvowel(word[right])) {
        ++left;
    } else if (left > 0 && isvowel(word[right-1])) {
        return std::string(1, tolower(word[right]));
    }
}
return isvowel(word[0]) ? tolower(word[0]) : "";