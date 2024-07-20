int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if ((abs(arr[i]) % 100 <= 99)) { // check if the number has at most two digits
            sum += abs(arr[i]); // add absolute value to avoid negative signs
        }
    }
    return sum;
}