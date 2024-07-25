Here is the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst) {
        if(num > 0 && floor(num) == num) { // check if number is positive and integer
            sum += pow(num, 2); // calculate square of the number
        }
    }
    return sum;
}