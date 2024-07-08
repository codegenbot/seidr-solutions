bool issame(float x, float y) {
    return (x == y);
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0 || !issame(num, 0.0)) {
            result.push_back(num);
        }
    }
    return result;
}