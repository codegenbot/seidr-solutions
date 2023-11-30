vector<float> get_positive(vector<float> l){
    vector<float> positiveNumbers;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positiveNumbers.push_back(l[i]);
        }
    }
    return positiveNumbers;
}