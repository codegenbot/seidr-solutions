Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int> count(lst.size(), 0);
    for(int i = 0; i < lst.size(); i++){
        count[lst[i]]++;
    }
    for(int i = 0; i < count.size(); i++){
        if(count[i] > 1){
            return false;
        }
    }
    return true;
}