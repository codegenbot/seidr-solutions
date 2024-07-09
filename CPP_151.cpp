```cpp
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    int odd_sum = 0;
    vector<float> lst;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}