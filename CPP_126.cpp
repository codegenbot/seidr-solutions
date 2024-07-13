Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1)
        return true;
    
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i] || (find(lst.begin(), lst.end(), lst[i]) != lst.end())){
            return false;
        }
    }
    return true;
}