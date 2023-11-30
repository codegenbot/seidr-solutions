vector<int> sort_array(vector<int> arr){
    // Custom lambda function to compare the number of ones in binary representation
    // and the decimal value of the numbers
    auto compare = [](int a, int b) {
        int countA = __builtin_popcount(a); // Count number of ones in binary representation of a
        int countB = __builtin_popcount(b); // Count number of ones in binary representation of b
        if (countA == countB) {
            return a < b; // Sort based on decimal value if number of ones is equal
        }
        return countA < countB; // Sort based on number of ones in binary representation
    };

    sort(arr.begin(), arr.end(), compare); // Sort the array using the custom compare function

    return arr; // Return the sorted array
}