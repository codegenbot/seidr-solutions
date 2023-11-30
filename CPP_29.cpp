vector<string> filteredStrings;

for(int i = 0; i < strings.size(); i++) {
    if(strings[i].compare(0, prefix.size(), prefix) == 0) {
        filteredStrings.push_back(strings[i]);
    }
}

return filteredStrings;