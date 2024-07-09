vector<string> words;
int max_unique = 0;
string result;

for (const string& word : words) {
    int unique_count = 0;
    set<char> seen;
    for (char c : word) {
        if (seen.insert(c).second) {
            unique_count++;
        }
    }
    if (unique_count > max_unique || (unique_count == max_unique && word < result)) {
        max_unique = unique_count;
        result = word;
    }
}

return result;