Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::count(lst.begin(), it, *it) > 1){
            return false;
        }
    }
    return true;
}