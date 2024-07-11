long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float x : lst) {
        if(int(x) >= 0 && int(x) == int(x)) { // check if number is positive and integer
            if(int(x) % 2 != 0) { // check if number is odd
                sum += pow(int(x), 2); // add square of the number to sum
            }
        }
    }
    return sum;
}