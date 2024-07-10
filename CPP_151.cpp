Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float n : lst){
        if(n > 0 && int(n) == n){ // Check if number is positive and integer
            if(int(n) % 2 != 0){ // Check if the number is odd
                sum += pow(int(n), 2); // Add square of the number to sum
            }
        }
    }
    return sum;
}