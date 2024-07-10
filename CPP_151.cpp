long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> odd_sum;
    for (int i = 0; i < 10; i++) {
        cin >> lst[i];
    }
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}