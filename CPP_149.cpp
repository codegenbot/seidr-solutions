vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    // Remove strings with odd lengths
    for(int i=0; i<lst.size(); i++){
        if(lst[i].length() % 2 == 0){
            result.push_back(lst[i]);
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