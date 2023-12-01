int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for(int i=0; i<arr.size(); i++){
        signProduct *= (arr[i] >= 0) ? 1 : -1;
        sumMagnitudes += abs(arr[i]);
    }
    
    return signProduct * sumMagnitudes;
}