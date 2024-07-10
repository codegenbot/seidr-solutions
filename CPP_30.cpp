vector<float> get_positive(vector<float> l){
    vector<float> res;
    for (float num : l) {
        if (num > 0) {
            res.push_back(num);
        }
    }
    return res;
}