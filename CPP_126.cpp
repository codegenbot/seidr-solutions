Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    if(copy != lst) {
        return false;
    }
    return true;
}