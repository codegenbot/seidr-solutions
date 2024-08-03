bool issame(vector<string> a,vector<string> b){
    for(const auto& str : a){
        if(find(all(b),str) == b.end()){
            return false;
        }
    }
    return true;
}