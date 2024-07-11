Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true;
    for(int i = 0; i < lst.size() - 1; ++i){
        if(lst[i] >= lst[i+1]){
            vector<int> dup;
            bool found = false;
            for(int j = 0; j < lst.size(); ++j){
                if(lst[j] == lst[i]) {
                    found = true;
                    dup.push_back(lst[j]);
                }
            }
            if(found && (dup.size() > 1)) return false;
        } else {
            return false;
        }
    }
    return true;