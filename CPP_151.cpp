double double_the_difference(vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && fmod(num, 2) == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}