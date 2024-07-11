long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && ceil(num) == floor(num) && fmod(num, 2) != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}