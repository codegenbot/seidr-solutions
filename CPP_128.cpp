int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;
    
    for (int i : arr) {
        if (i == 0) {
            return 0;
        }
        sum += abs(i);
        product *= sign(i);
    }
    if (arr.empty()) {
        return -32768;
    }
    return sum * product;
}

int sign(int x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}