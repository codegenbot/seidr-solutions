vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (const auto &num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}