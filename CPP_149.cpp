
bool issame(vector<string> a, vector<string> b){
    return is_permutation(a.begin(), a.end(), b.begin(), b.end());
}