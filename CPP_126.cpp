Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> v(lst.begin(), lst.end());
            sort(v.begin(), v.end());
            for(int j = 0; j < v.size() - 1; j++){
                if(v[j] == v[j+1]){
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
    return true;
}