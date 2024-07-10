long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> odd_sum;
    for (int i = 0; i < 5; ++i) {
        float num;
        cin >> num;
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
            odd_sum.push_back(num);
        }
    }
    return sum;
}