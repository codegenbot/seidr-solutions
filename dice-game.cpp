double probability(int n, int m) {
    double total = (n * m) - (m + n) + 1.0;
    double higher_than_colin = (n - m);
    if(m > n){
        return (double)0;
    }
    else{
        return ((double)higher_than_colin + 1.0) / total;
    }
}