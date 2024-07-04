vector<int> incr_list(vector<int> l){
    for(int &i : l) {
        i += 1;
    }
    return l;
}