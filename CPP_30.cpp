vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l) {
        if(x > 0.0f)
            result.push_back(x);
    }
    return result;
}