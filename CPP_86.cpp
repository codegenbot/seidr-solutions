string anti_shuffle(string s){
    string result = "";
    size_t start = 0;
    while(start < s.length()){
        size_t end = start;
        while(end < s.length() && s[end] <= s[start]){
            end++;
        }
        for(size_t i=start; i<end; i++){
            result += s[i];
        }
        if(end != s.length())
            result += " ";
        start = end;
    }
    return result;
}