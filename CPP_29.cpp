vector<string> filteredStrings;
for(string str : strings){
    if(str.compare(0, prefix.length(), prefix) == 0){
        filteredStrings.push_back(str);
    }
}
return filteredStrings;