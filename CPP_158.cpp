Here is the completed code:

```cpp
vector<string> words;
int maxCount = 0;
string result;

for (auto& word : words) {
    int count = 0;
    set<char> uniqueChars(word.begin(), word.end());
    if (uniqueChars.size() > maxCount) {
        maxCount = uniqueChars.size();
        result = word;
    }
}

return result;