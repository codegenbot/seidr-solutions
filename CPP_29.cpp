vector<string> filtered_strings;
for(auto str : strings){
    if(str.substr(0, prefix.size()) == prefix){
        filtered_strings.push_back(str);
    }
}
return filtered_strings;