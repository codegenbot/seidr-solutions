Here's the completed code:

bool is_sorted(vector<int> lst) {
    for(int i = 0; i < lst.size() - 1; ++i) {
        if(lst[i] >= lst[i + 1]) return false;
    }
    int count = 0;
    for(int num : unique(lst.begin(), lst.end())) {
        if(count > 1) return false;
        count++;
    }
    return true;
}