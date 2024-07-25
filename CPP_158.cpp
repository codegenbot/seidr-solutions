string find_max(vector<string> words){
    string result = *words.begin();
    for(string str : words){
        if(str.length() > result.length() || (str.length() == result.length() && str.size(unique(str.begin(), str.end())) > size(unique(result.begin(), result.end())))){
            result = str;
        }
    }
    return result;
}