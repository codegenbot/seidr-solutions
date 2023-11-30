int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int magnitudeSum = 0;
    
    for(int i=0; i<arr.size(); i++){
        int sign = 0;
        if(arr[i] > 0){
            sign = 1;
        } else if(arr[i] < 0){
            sign = -1;
        }
        
        signProduct *= sign;
        magnitudeSum += abs(arr[i]);
    }
    
    return signProduct * magnitudeSum;
}