bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()) return false;
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> incr_list(vector<int> l){
    for(int& num : l){
        num++;
    }
    return l;
}