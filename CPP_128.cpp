int prod_signs(vector<int> arr){
    int signProd = 1;
    long long sumMag = 0;
    
    for(int num : arr){
        if(num == 0) return 0; 
        signProd *= (num > 0 ? 1 : -1);
        sumMag += abs(num);
    }
    
    if(arr.empty()) return -32768;
    return signProd * sumMag;
}