vector<string> filteredStrings;

for(const auto& str : strings){
    if(str.find(prefix) == 0){
        filteredStrings.push_back(str);
    }
}

return filteredStrings;