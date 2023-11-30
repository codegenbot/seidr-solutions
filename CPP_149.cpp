vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        if(lst[i].size() % 2 == 0){
            result.push_back(lst[i]);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.size() == b.size()){
            return a < b;
        }
        return a.size() < b.size();
    });
    return result;
}