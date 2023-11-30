vector<string> filtered_strings;
for(string s : strings){
    if(s.substr(0, prefix.length()) == prefix){
        filtered_strings.push_back(s);
    }
}
return filtered_strings;