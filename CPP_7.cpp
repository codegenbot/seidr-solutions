vector<string> filtered_strings;
for(auto s : strings){
    if(s.find(substring) != string::npos){
        filtered_strings.push_back(s);
    }
}
return filtered_strings;