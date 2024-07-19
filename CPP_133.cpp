int sum_squares(vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += static_cast<int>(ceil(num)) * static_cast<int>(ceil(num));
    }
    return sum;
}