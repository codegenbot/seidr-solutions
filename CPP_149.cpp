vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    // Remove strings with odd lengths
    for(auto str : lst){
        if(str.length() % 2 == 0){
            result.push_back(str);
        }
    }
    
    // Sort the vector by length and alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return result;
}