vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    for(auto it = lst.begin(); it != lst.end(); ++it){
        if((*it).length() % 2 == 0){
            result.push_back(*it);
        }
    }
    
    sort(result.begin(), result.end(), [](string a, string b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return result;
}