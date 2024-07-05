vector<int> incr_list(vector<int> l){
    for(int &n : l) {
        n += 1;
    }
    return l;
}