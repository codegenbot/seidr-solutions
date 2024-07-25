string find_max(vector<string> words){
    string result = words[0];
    int maxUnique = 0;

    for(auto str : words){
        set<char> s(str.begin(), str.end());
        if(s.size() > maxUnique){
            maxUnique = s.size();
            result = str;
        }
    }

    return result;
}