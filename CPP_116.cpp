vector<int> sort_array(vector<int> arr){
    // Lambda function to count the number of ones in binary representation
    auto count_ones = [](int num) {
        int count = 0;
        while (num > 0) {
            if (num & 1) {
                count++;
            }
            num >>= 1;
        }
        return count;
    };

    // Sorting the vector based on number of ones and decimal value
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        } else {
            return ones_a < ones_b;
        }
    });

    return arr;
}