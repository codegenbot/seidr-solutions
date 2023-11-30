vector<float> get_positive(vector<float> l){
    vector<float> positive;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive.push_back(l[i]);
        }
    }
    return positive;
}