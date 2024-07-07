Here is the completed code:

int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst) {
        double ceil_x = ceil(x);
        result += (ceil_x * ceil_x);
    }
    return result;
}