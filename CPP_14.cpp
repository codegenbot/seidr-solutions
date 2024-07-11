vector<string> all_prefixes(string str){
    vector<string> res;
    string prefix = "";
    
    for(char c : str){
        prefix += c;
        res.push_back(prefix);
    }
    
    return res;   
}