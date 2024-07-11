Here is the solution:

vector<int> sort_vector(vector<int> arr){
    sort(arr.begin(), arr.end(), 
         [](int a, int b) {
             return countll(a) < countll(b) || (countll(a) == countll(b) && a < b);
         });
    return arr;
}

int countll(int n) {
    int ones = 0;
    while(n > 0) {
        if((n & 1) != 0)
            ones++;
        n >>= 1;
    }
    return ones;
}