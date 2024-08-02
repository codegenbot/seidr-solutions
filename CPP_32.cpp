double find_zero(vector<double> xs){
    double left = 1e9;
    double right = -1e9;
    
    for(int i = 0; i < xs.size(); i++){
        if(i % 2 == 0) continue;
        right = min(right, xs[i] / (double)i);
        left = max(left, -xs[i] / (double)i);
    }
    
    return (left + right) / 2.0;
}