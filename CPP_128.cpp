int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        int sign = arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0);
        product *= sign;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}