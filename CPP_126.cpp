bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) return false;
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    int count = 0;
    for(int i = 0; i < lst.size(); i++) {
        if(temp[i] == lst[i]) {
            count++;
            if(count > 1) return false;
        }
    }
    return true;
}