int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        sum += abs(arr[i]);
        if(arr[i] < 0){
            product *= -1;
        }
    }
    
    return sum * product;
}