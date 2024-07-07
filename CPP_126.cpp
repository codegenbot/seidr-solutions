Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it;
            for(it = lst.begin() + i; it != lst.end(); ++it){
                if(*it == lst[i-1]){
                    return false;
                }
            }
            return false;
        }
    }
    return true;
}