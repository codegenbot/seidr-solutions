vector<float> derivative(vector<float> xs){
    vector<float> derivative_result;
    for(int i=1; i<xs.size(); i++){
        derivative_result.push_back(xs[i] * i);
    }
    return derivative_result;
}