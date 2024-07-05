vector<int> incr_list(vector<int> l){
    for(int &x : l) {
        x += 1;
    }
    return l;
}