bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> vec(lst.begin(), lst.end());
            for(int j = 0; j < vec.size() - 1; j++){
                if(vec[j] == vec[j+1])
                    return false;
            }
            return false;
        }
    }
    return true;
}