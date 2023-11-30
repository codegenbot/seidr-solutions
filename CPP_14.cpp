vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    
    return prefixes;
}