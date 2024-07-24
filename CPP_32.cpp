double find_zero(vector<double> xs){
    double ans = xs[0];
    for(int i=1; i<xs.size();i+=2){
        ans = ans - xs[i]/(double)poly({1},i)/ans;
    }
    return ans;
}