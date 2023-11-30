vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        if(str.length() % 2 == 0){
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() < b.length()){
            return true;
        }
        else if(a.length() > b.length()){
            return false;
        }
        else{
            return a < b;
        }
    });
    return result;
}