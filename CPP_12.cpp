if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(const string& s : strings){
        if(s.length() > longestStr.length() || (s.length() == longestStr.length() && s < longestStr)){
            longestStr = s;
        }
    }
    
    return longestStr;
}