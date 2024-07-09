int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst) {
        double ceil_num = ceil(num);
        long square = (long)ceil_num * (long)ceil_num; // Convert to integer and square it
        result += square;
    }
    return result;
}