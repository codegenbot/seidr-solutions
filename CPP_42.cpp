vector<int> incr_list(vector<int> l){
    for(int &i : l) {
        ++i;
    }
    return l;
}