vector<string> filtered_strings;
for (const string& str : strings) {
    if (issame(str, substring)) {
        filtered_strings.push_back(str);
    }
}
return filtered_strings;