string find_max(vector<string> words){
    string max = words[0];
    int max_len = 0;

    for(auto str:words){
        if(str.length() > max_len || (str.length() == max_len && str < max)){
            max = str;
            max_len = str.length();
        }
    }

    return max;
}