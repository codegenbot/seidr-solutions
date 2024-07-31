string find_max(vector<string> words){
    string max_str;
    int max_len = 0;
    for(string str:words){
        set<char> unique_chars(str.begin(),str.end());
        if(unique_chars.size()>max_len){
            max_len = unique_chars.size();
            max_str = str;
        }
        else if(unique_chars.size()==max_len && str < max_str){
            max_str = str;
        }
    }
    return max_str;
}