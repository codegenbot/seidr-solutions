vector<float> derivative(vector<float> xs){
    vector<float> der;
    for(int i=1; i<xs.size(); i++){
        der.push_back(xs[i] * i);
    }
    return der;
}