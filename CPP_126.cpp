Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> v;
            for(int j = 0; j <= i; j++){
                v.push_back(lst[j]);
            }
            if(unique(v.begin(), v.end()) - v.begin() != v.size()){
                return false;
            }
            return true;
        }
    }
    return true;
}