Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float x : lst){
        if(int(x) >= 0 && int(x) == x){ // check if number is non-negative and integer
            if(int(x) % 2 != 0){ // check if number is odd
                sum += pow(int(x), 2); // add square of the number to the sum
            }
        }
    }
    return sum;
}