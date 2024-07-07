bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // base case: single element or empty vector
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]) {
            int count = 1;
            for(int j = i + 1; j < lst.size(); j++){
                if(lst[j] == lst[i]){
                    count++;
                } else {
                    break;
                }
            }
            if(count > 1) return false; // more than one duplicate found
        } else {
            return false; // not sorted
        }
    }
    return true; // sorted
}