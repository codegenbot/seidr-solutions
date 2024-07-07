Here's the completed code:

bool is_sorted(vector<int> lst){
    bool sorted = true;
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            sorted = false;
            break;
        }
    }
    return (sorted && unique(lst.begin(), lst.end()) - lst.begin() == 0);
}