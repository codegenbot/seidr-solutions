Here is the completed code:

int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int ceiling = ceil(x);
        sum += pow(ceiling, 2);
    }
    return sum;