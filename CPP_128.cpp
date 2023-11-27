int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for(int num : arr){
        signProduct *= (num >= 0) ? 1 : -1;
        sumMagnitudes += abs(num);
    }
    
    return signProduct * sumMagnitudes;
}