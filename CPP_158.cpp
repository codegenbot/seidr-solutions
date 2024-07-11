int max_unique = 0, max_index = -1;
for (int i = 0; i < words.size(); ++i) {
    string str = words[i];
    set<char> s(str.begin(), str.end());
    int unique = s.size();
    if (unique > max_unique || (unique == max_unique && str < words[max_index])) {
        max_unique = unique;
        max_index = i;
    }
}
return words[max_index];