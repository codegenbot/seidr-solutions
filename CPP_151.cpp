long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if the number is positive and an integer.
            if (fmod(num, 1.0) != 0.0) { // Check if the number is odd.
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}