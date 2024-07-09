float double_the_difference(vector<float> lst) {
    float total_sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] > 0 && modf(lst[i], &total_sum) == 0) {
            return -total_sum;
        }
    }
    return total_sum;
}