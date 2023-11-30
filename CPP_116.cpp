vector<int> sort_vector(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int a_ones = __builtin_popcount(a);
        int b_ones = __builtin_popcount(b);
        
        if(a_ones == b_ones){
            return a < b;
        }
        else{
            return a_ones < b_ones;
        }
    });
    
    return arr;
}