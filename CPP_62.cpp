vector<float> derivative(vector<float> xs){
    vector<float> derivative;
    for(int i=1; i<xs.size(); i++){
        derivative.push_back(xs[i] * i);
    }
    return derivative;
}