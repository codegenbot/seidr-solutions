string find_max(vector<string> words){
    string result = *min_element(words.begin(),words.end(),[&](const string &a,const string &b){
        if(a.size() == b.size())
            return a < b;
        return a.size() > b.size();
    });
    for(auto word:words){
        int uniqueCount = 0;
        bool found[256] = {false};
        for(char c:word){
            if(!found[c])
                uniqueCount++;
            found[c]=true;
        }
        if(uniqueCount > (result.size())){
            result = word;
        }
    }
    return result;
}