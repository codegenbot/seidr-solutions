string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "NO";
    
    vector<bool> isPrime(end - start + 1, true);
    for (int i = 2; i * i <= end - start + 1; i++) {
        int value = i;
        for(int j=start; j<=end; j+=i){
            if(j-start+1==value) isPrime[j-start]=false;
            else value++;
        }
    }

    for(int i=start; i<=end; i++){
        if(isPrime[i-start]) return "YES";
    }
    
    return "NO";
}