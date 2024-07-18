string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestString = strings[0];
    for(const auto& str : strings){
        if(str.length() > longestString.length() || (str.length() == longestString.length() && str < longestString)){
            longestString = str;
        }
    }
    
    return longestString;
}