Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int> dup;
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]) {
            dup.push_back(lst[i]);
        }
    }
    return dup.size() <= 1;
}