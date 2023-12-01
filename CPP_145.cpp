vector<int> order_by_points(vector<int> nums){
    // Sort the vector in ascending order based on the sum of their digits
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sumA = 0;
        int sumB = 0;
        string strA = to_string(abs(a));
        string strB = to_string(abs(b));
        for(char c : strA){
            sumA += c - '0';
        }
        for(char c : strB){
            sumB += c - '0';
        }
        if(sumA == sumB){
            return a < b;
        }
        return sumA < sumB;
    });

    return nums;
}