Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // If the list has one or zero elements, it's sorted
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) return false; // If there are any duplicates or non-increasing sequence, return false
    }
    return true;
}