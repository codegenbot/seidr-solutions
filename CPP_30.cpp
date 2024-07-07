vector<float> get_positive(vector<float> l){
    vector<float> pos_l;
    for(float x : l){
        if(x > 0) pos_l.push_back(x);
    }
    return pos_l;
}