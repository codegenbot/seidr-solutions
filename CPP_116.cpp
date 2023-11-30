vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = 0, countB = 0;
        if(a < 0 && b < 0){
            countA = __builtin_popcount(a);
            countB = __builtin_popcount(b);
        }
        else{
            countA = __builtin_popcount(abs(a));
            countB = __builtin_popcount(abs(b));
        }
        if(countA == countB){
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}