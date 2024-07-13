Here's the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // If vector has one or zero elements, it's considered sorted
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]) continue;
        else {
            vector<int> temp = lst;
            sort(temp.begin(), temp.end());
            return false;
        }
    }
    int count = 1;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] == lst[i-1]) count++;
        else if(count > 1) return false; // If more than one duplicate, it's not sorted
        count = 1;
    }
    return true;
}