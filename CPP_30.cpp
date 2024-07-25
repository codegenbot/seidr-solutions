vector<float> get_positive(vector<float> l){
    vector<float> pos;
    for(float i : l) {
        if(i > 0) {
            pos.push_back(i);
        }
    }
    return pos;
}