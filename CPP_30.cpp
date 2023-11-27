vector<float> get_positive(vector<float> l){
    vector<float> positiveNums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positiveNums.push_back(l[i]);
        }
    }
    return positiveNums;
}