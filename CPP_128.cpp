int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;
    
    for(int x : arr) {
        if(x == 0) {
            return 0;
        }
        product *= (x < 0 ? -1 : 1);
        sum += abs(x);
    }
    
    return product * sum;
}