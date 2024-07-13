Here is the completed code:

int next_smallest(vector<int> lst){
    if (lst.size() < 2) return -1; // Return None or -1 in C++ to represent None
    sort(lst.begin(), lst.end());
    for(int i = 0; i < lst.size()-1; i++){
        if (lst[i] != lst[i+1]) {
            return lst[i+1];
        }
    }
    return -1;
}