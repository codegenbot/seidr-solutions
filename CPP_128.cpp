int prod_signs(vector<int> arr){
    int result = (arr.empty()) ? -32768 : 1;
    for(int num: arr) {
        if(num == 0) {
            return 0; // If zero present, multiply with other signs.
        }
        result *= (num > 0)? 1: -1;
    }
    return abs(result);
}