long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> numbers;
    for (int i = 0; i < 10; ++i) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }
    for (float num : numbers) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}