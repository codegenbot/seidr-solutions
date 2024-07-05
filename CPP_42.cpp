vector<int> incr_list(vector<int> l){
    for (int &num : l) {
        num += 1;
    }
    return l;
}