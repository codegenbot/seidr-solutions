int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return None;
    }
    sort(lst.begin(), lst.end());
    return lst[1];
}