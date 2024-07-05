bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    int n = q.size();
    
    // Check if the vector is palindromic
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }
    
    // Calculate the sum of elements
    for (int num : q) {
        sum += num;
    }
    
    // Check if the sum is less than or equal to the maximum possible weight
    return sum <= w;
}