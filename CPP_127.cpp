string intersection(vector<int> interval1, vector<int> interval2){
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    
    if(start > end) return "NO";
    
    for(int i=2; i<=sqrt(end-start+1); i++){
        if((end-start+1)%i==0 && (start+1)%i==0) continue;
        bool isPrime = true;
        for(int j=2; j*j<=i; j++) if(i%j==0) {isPrime=false;break;}
        if(isPrime) return "YES";
    }
    
    return "NO";
}