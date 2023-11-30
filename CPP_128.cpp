int prod_signs(vector<int> arr){
    int prod = 1;
    int sum = 0;
    
    if(arr.empty()){
        return -32768;
    }
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            prod *= 1;
        }
        else if(arr[i] < 0){
            prod *= -1;
        }
        else{
            prod *= 0;
        }
        sum += abs(arr[i]);
    }
    
    return prod * sum;
}