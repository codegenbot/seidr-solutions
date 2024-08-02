Here is the solution:

int sum_squares(vector<float> lst){
    int total = 0;
    for(float num : lst){
        long long int rounded = ceil(num);
        total += (rounded * rounded);
    }
    return total;