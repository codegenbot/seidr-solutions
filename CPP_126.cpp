Here is the solution:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]) return false;
    }
    auto last_duplicate = unique(lst.begin(), lst.end());
    return last_duplicate == lst.begin();
}