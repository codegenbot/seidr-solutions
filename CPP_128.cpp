int prod_signs(vector<int> arr){
    int res = (arr.empty()) ? -32768 : 1;
    for(int num: arr){
        if(num != 0) {
            res *= (num > 0)? 1: -1;
        }
    }
    return abs(res);
}