bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> v(lst.begin(), lst.end());
            sort(v.begin(), v.end());
            int count = 0;
            for(int j = 0; j < v.size() - 1; j++){
                if(v[j] == v[j+1]){
                    count++;
                }
            }
            return count > 0;
        }
    }
    return true;
}