vector<int> sort_vector(vector<int> arr){
    // sort the vector based on the number of ones in the binary representation
    // if two numbers have the same number of ones, sort based on decimal value
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);         // count the number of ones in binary representation of a
        int countB = __builtin_popcount(b);         // count the number of ones in binary representation of b
        if (countA == countB) {
            return a < b;                           // sort based on decimal value if they have the same number of ones
        }
        return countA < countB;                     // sort based on the number of ones in binary representation
    });

    return arr;
}