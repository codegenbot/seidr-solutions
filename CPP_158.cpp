```
string find_max(vector<string> words){
    string result;
    int max_unique = 0;

    for(string s : words){
        set<char> unique_chars(s.begin(), s.end());
        if(unique_chars.size() > max_unique){
            max_unique = unique_chars.size();
            result = s;
        }
    }

    return result;
}