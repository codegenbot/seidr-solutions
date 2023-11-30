vector<string> filtered_strings;
for (auto str : strings) {
    if (str.substr(0, prefix.length()) == prefix) {
        filtered_strings.push_back(str);
    }
}
return filtered_strings;