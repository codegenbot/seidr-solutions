Here is the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float num : lst) {
        if(std::abs(num) == static_cast<int>(num) && num > 0) { // Check if number is positive and integer
            sum += pow(static_cast<int>(num), 2); // Calculate square of the number
        }
    }
    return sum;
}