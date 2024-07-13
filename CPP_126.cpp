Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // base case: single element or empty vector
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]) return false; // descending order found
        else if(count(lst.begin(), lst.end(), lst[i]) > 1) return false; // duplicate found
    }
    return true; // all conditions passed, the vector is sorted
}