Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] >= lst[i]) return false;
    }
    vector<int> counts(101,0);
    for(int x : lst) counts[x]++;
    for(int i = 1; i <= 100; i++){
        if(counts[i] > 1) return false;
    }
    return true;
}