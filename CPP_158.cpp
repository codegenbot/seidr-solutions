int maxUnique = 0;
string result;

for (const string& word : words) {
    int uniqueCount = 0;
    set<char> charSet(word.begin(), word.end());
    if (charSet.size() > maxUnique) {
        maxUnique = charSet.size();
        result = word;
    }
}

return result;