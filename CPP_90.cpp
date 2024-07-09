if(lst.size() < 2) {
        return None;
    }
    
    vector<int> unique_lst(lst.begin(), lst.end());
    sort(unique_lst.begin(), unique_lst.end());
    
    int count = 0;
    for(int i = 0; i < unique_lst.size(); ++i) {
        if(unique_lst[i] != unique_lst[0]) {
            count++;
        }
        if(count == 1) {
            return unique_lst[i];
        }
    }
    
    return None;
}