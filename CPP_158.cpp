string find_max(vector<string> words){
    string result = *min_element(words.begin(),words.end(),[&](const string &s1,const string &s2){ 
        if(hash_function(s1) == hash_function(s2)) return s1<s2;
        return hash_function(s1)>hash_function(s2);
    });
    return result;
}