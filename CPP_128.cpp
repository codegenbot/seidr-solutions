int prod_signs(vector<int> arr){
    int sign = 1; // initialize product of signs
    long long sum = 0; // initialize sum

    for (int num : arr) {
        if (num == 0) { // if number is zero, reset the sign and sum
            sign = 1;
            sum = 0;
        } else if (num < 0) { // if number is negative, change sign
            sign *= -1;
        }
        sum += abs(num); // add absolute value of number to sum
    }

    return sign * sum; // multiply product of signs with sum
}