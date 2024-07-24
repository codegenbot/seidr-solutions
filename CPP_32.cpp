double find_zero(vector<double> xs){
    double sum = xs[0];
    for(int i = 1; i < xs.size(); i+=2) {
        if(i == 1 && (sum * -1 > 1 || sum < 1)) return (-xs[i]/sum);
        else if(sum * -1 > 1 || sum < 1) return ((-xs[i] + sqrt(pow(-xs[i],2) - 4*sum*xs[i-1]))/(2*sum));
    }
    return -1;
}