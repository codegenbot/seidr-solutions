vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (int i = 0; i < str.length(); i++) {
        prefixes.push_back(str.substr(0, i + 1));
    }
    return prefixes;
}