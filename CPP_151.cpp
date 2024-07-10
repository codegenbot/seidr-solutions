long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    float num;
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            sum += pow(num, 2);
        }
    }
    return sum;
}