vector<bool> issame(vector<string> a,vector<string>b){
    vector<bool> result;
    for(auto s : a){
        if(find(b.begin(),b.end(),s) != b.end())
            result.push_back(true);
        else
            result.push_back(false);
    }
    return result;
}