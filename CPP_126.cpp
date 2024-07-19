Here is the completed code:

bool is_sorted(vector<int> lst){
    bool sorted = true;
    for(int i=1; i<lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            sorted = false;
            break;
        }
    }
    return !any_of(lst.begin(), lst.end(), [i](int x){ return count(lst.begin(), lst.end(), x) > 1; }) && sorted;
}