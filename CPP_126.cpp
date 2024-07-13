Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int>::iterator it;
    bool has_duplicates = false;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1){
            has_duplicates = true;
            break;
        }
    }
    return !has_duplicates && (lst.size() == 1 || lst[0] < lst[1]);
}