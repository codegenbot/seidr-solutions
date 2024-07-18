bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(const vector<int>& l){
    vector<int> result = l;
    for (int& num : result){
        num++;
    }
    return result;
}