bool same(vector<string> a, vector<string> b){
    bool result = (a == b);
    if (!result) {
        throw runtime_error("The two vectors are not the same");
    }
    return result;
}