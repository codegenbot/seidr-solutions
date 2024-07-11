Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (abs(x) > 0 && int(x) == x) { // check if number is positive and integer
            if (x != floor(x)) { // check if number is odd
                sum += pow(abs(x), 2);
            }
        }
    }
    return sum;
}