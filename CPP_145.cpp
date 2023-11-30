vector<int> order_by_points(vector<int> nums){
    // Sort the vector based on the sum of digits
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sumA = 0, sumB = 0;
        // Calculate the sum of digits for a
        string strA = to_string(abs(a));
        for(char c : strA){
            sumA += c - '0';
        }
        // Calculate the sum of digits for b
        string strB = to_string(abs(b));
        for(char c : strB){
            sumB += c - '0';
        }
        // If the sums are equal, sort based on index
        if(sumA == sumB){
            return a < b;
        }
        // Sort based on sum of digits
        return sumA < sumB;
    });
    return nums;
}