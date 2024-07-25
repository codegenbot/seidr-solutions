long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if the number is positive and an integer
            if (modf(sqrt(num), &num) != 0.0) { // Check if the square root of the number is not an integer
                sum += pow(num, 2); // Add the square of the number to the sum
            }
        }
    }
    return sum;
}