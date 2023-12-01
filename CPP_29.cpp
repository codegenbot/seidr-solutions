vector<string> filteredStrings;
for (auto str : strings) {
    if (str.substr(0, prefix.size()) == prefix) {
        filteredStrings.push_back(str);
    }
}
return filteredStrings;