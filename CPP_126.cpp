Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    auto last = unique(lst.begin(), lst.end());
    return last == lst.end();
}