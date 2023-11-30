vector<string> filteredStrings;
for(string str : strings){
    if(str.substr(0, prefix.length()) == prefix){
        filteredStrings.push_back(str);
    }
}
return filteredStrings;