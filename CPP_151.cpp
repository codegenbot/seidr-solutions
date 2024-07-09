long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if(int(x) >= 0 && int(x) == round(x)) { // Check if number is non-negative and integer
            if(int(x) % 2 != 0) { // Check if number is odd
                sum += (long long)int(x) * int(x); // Calculate square of the number
            }
        }
    }
    return sum;
}