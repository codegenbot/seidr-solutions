vector<string> filtered_strings;

for (int i = 0; i < strings.size(); i++) {
    if (strings[i].find(prefix) == 0) {
        filtered_strings.push_back(strings[i]);
    }
}

return filtered_strings;