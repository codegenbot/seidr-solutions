string longest(vector<string> strings){
    string result = "";
    int maxLength = 0;
    
    for(string s : strings){
        if(s.length() > maxLength){
            maxLength = s.length();
            result = s;
        }
    }
    
    return result;
}