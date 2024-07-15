vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (size_t i = 0; i < l.size(); ++i) {
        if (l[i] > 0) {
            result.push_back(l[i]);
        }
    }
    return result;
}