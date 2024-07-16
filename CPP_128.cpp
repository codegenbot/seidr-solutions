int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        if(num > 0) sum += num;
        else if(num < 0) sum -= num;
        
        if(num != 0) product *= num > 0 ? 1 : -1;
    }
    
    return sum * product;
}