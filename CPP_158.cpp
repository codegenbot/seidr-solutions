string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
            [](const string& s1, const string& s2){ 
                return (s1.size() == s2.size()) ? s1 < s2 : s1.size() < s2.size();
            });
    for(auto str : words){
        if(str.size() > result.size()){
            result = str;
        }
        else if(str.size() == result.size()){
            if(result < str){
                result = str;
            }
        }
    }
    return result;
}