Here is the solution:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            if(count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}