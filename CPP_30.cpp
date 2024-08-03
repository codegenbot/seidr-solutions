Here is the completed code:

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0.0f)
            result.push_back(x);
    }
    return result;
}