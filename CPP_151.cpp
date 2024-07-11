Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and an integer
            if (modf(sqrt(num), &num) != 0.0) { // check if square root has a fractional part
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}