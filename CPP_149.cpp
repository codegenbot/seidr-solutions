vector<string> vector_sort(vector<string> lst){
    vector<string> result;
    
    // Delete strings with odd lengths
    for(int i=0; i<lst.size(); i++){
        if(lst[i].length() % 2 == 0){
            result.push_back(lst[i]);
        }
    }
    
    // Sort the vector by length and then alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return result;
}