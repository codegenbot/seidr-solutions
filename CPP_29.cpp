vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto it = strings.begin(); it != strings.end(); ++it){
        if(it->find(prefix) == 0)
            result.push_back(*it);
    }
    return result;
}