Here is the solution:

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int int b) {
        if (count(bite(a)) == count(bite(b)))
            return a < b;
        else
            return count(bite(a)) < count(bite(b));
    });
    return arr;
}

int count(int n) {
    int ones = 0;
    while(n > 0) {
        if((n & 1) == 1)
            ones++;
        n >>= 1;
    }
    return ones;
}
int bite(int n) {
    return n;
}