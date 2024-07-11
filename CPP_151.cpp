Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float num : lst) {
        if(std::abs(num) > 0 && std::floor(num) == num) { // Check if number is positive and integer
            if((int)num % 2 != 0) { // Check if number is odd
                sum += (long long)pow((int)num, 2); // Calculate square of the number
            }
        }
    }
    return sum;
}