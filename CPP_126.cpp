Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1) return false;
    }
    return true;