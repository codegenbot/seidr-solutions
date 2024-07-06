int prod_signs(vector<int> arr){
    if(arr.empty())
        return -32768;

    int productSign = 1;
    long long sumMagnitude = 0;
    
    for(int x : arr){
        if(x == 0)
            return 0;
        productSign *= sign(x);
        sumMagnitude += abs(x);
    }
    
    return (productSign * sumMagnitude);
}