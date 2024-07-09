Here is the completed code:

```cpp
string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& s1, const string& s2) {
            return count(s1.begin(), s1.end(), unique(s1.begin(), s1.end())[0]) <
                count(s2.begin(), s2.end(), unique(s2.begin(), s2.end())[0]);
    });
    return max_word;
}