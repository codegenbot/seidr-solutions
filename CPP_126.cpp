Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            if(unique(lst.begin(), lst.end()) - lst.begin() == lst.size()){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}