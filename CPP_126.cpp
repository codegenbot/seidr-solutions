bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> v(lst.begin(), lst.end());
            sort(v.begin(), v.end());
            int count = 0;
            for(int j = 0; j < v.size(); j++){
                if(v[j] == v[0])
                    count++;
                else
                    break;
            }
            return count > 1 ? false : true;
        }
    }
    return true;
}