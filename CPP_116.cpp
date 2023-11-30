vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        
        if(countA < countB){
            return true;
        } else if(countA > countB){
            return false;
        } else {
            return a < b;
        }
    });
    
    return arr;
}