vector<int> sort_array(vector<int> arr){
    // Sort the vector based on the number of ones in their binary representation
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA != countB) {
            return countA < countB;
        } else {
            return a < b;
        }
    });
    return arr;
}