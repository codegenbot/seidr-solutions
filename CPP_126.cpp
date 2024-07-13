Here's the solution:

bool is_sorted(vector<int> lst){
    if(lst.size() == 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return i > 1 && !any_of(lst.begin()+1, lst.end(), [i](int x){return x == i;});
        }
    }
    return true;
}