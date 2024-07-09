int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int sum = 0;
    int product = 1;
    
    for(int num : arr){
        sum += abs(num);
        if(num > 0){
            product *= 1;
        }
        else if(num < 0){
            product *= -1;
        }
        else{
            product *= 0;
        }
    }
    
    return sum * product;
}