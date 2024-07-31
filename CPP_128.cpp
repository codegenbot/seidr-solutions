int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= sign(num);
        sum += abs(num);
    }
    
    return (sum * product) ? sum * product : -32768;
}

int sign(int num) {
    return num > 0 ? 1 : (num < 0 ? -1 : 0);
}