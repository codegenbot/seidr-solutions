vector<string> filtered_strings;
for (string str : strings) {
    if (str.find(substring) != string::npos) {
        filtered_strings.push_back(str);
    }
}
return filtered_strings;