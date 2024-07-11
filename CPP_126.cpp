Here's the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() < 2) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            if(count(lst.begin(), lst.end(), lst[i]) > 1) return false;
        } else {
            return false;
        }
    }
    return true;
}