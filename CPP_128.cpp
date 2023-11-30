int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sum += abs(arr[i]);
        }
        else if(arr[i] < 0){
            sum += abs(arr[i]);
            product *= -1;
        }
    }
    
    return sum * product;
}