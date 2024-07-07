Here's the completed code:

bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) return false;
    }
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst.size() == 1 || all_of(lst.begin()+1, lst.end(), [prev=lst[0]](int x) { return x > prev; });
}