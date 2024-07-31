int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;
    for (int num : arr) {
        if (num == 0) product *= 1;
        else if (num > 0) product *= 1;
        else product *=-1;
        sum += abs(num);
    }
    return product * sign(sum) | (product == 0 ? 0 : 1);
}