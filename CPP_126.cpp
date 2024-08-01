Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // base case: single element or empty vector
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) return false; // duplicate number found
    }
    return true;
}