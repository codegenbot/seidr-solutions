```
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.compare(0, prefix.size(), prefix) == 0)
            result.push_back(s);
    }
    return result;