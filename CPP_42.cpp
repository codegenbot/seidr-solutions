bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}