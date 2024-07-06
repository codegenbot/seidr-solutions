bool issame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    vector<float> evenIndices;
    for (float num : l) {
        if (modf(num, &num) == 0) {
            evenIndices.push_back(num);
        } else {
            result.push_back(num);
        }
    }
    sort(evenIndices.begin(), evenIndices.end());
    result.insert(result.end(), evenIndices.begin(), evenIndices.end());
    return result;
}