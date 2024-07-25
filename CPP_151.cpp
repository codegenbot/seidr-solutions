Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float n : lst) {
        if (n > 0 && floor(n) == n) { // check if number is positive and integer
            sum += pow(n, 2);
        }
    }
    return sum;
}