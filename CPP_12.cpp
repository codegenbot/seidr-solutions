string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(int i = 1; i < strings.size(); i++){
        if(strings[i].length() > longestStr.length() || 
          (strings[i].length() == longestStr.length() && strings[i] < longestStr)){
            longestStr = strings[i];
        }
    }
    
    return longestStr;
}