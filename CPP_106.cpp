vector<int> f(int n){
    vector<int> result(n);
    if(n>=1){
        result[0]=1;
    }
    if(n>=2){
        result[1]=2;
    }
    for(int i=2;i<n;i++){
        if(i%2==0){
            result[i] = result[i-1] * i;
        } else {
            result[i] = 0;
            for(int j=1;j<=i;j++){
                result[i] += j;
            }
        }
    }
    return result;
}