vector<string> vector_sort(vector<string> lst){
    vector<string> result;
    for(auto s : lst){
        if(s.size() % 2 != 0){
            continue;
        }
        result.push_back(s);
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.size() == b.size()){
            return a < b;
        }
        return a.size() < b.size();
    });
    return result;
}