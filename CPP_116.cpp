Here is the completed code:

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int onesA = __builtin_popcount(a);
        int onesB = __builtin_popcount(b);
        
        if (onesA != onesB) return onesA < onesB;
        else return a < b;
    });
    
    return arr;
}