bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i-1] >= lst[i]) {
            vector<int> v;
            for(int j = 0; j < i; j++) {
                v.push_back(lst[j]);
            }
            if(count(v.begin(), v.end(), lst[i]) > 1) {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}