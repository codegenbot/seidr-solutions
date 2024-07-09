int sum_squares(const vector<float>& lst) {
    int sum = 0;
    for(const float& num : lst){
        sum += ceil(num) * ceil(num);
    }
    return sum;
}