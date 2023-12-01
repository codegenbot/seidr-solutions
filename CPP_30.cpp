vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float n : l){
        if(n > 0){
            result.push_back(n);
        }
    }
    return result;
}