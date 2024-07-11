double double_the_difference(vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}