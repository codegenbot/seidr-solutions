int prod_signs(vector<int> arr){
    int productSign = 1;
    long long sumMagnitude = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0) {
            productSign *= (arr[i] > 0 ? 1 : -1);
            sumMagnitude += abs(arr[i]);
        }
    }
    
    return (arr.size() == 0)?-32768:productSign * sumMagnitude;
}