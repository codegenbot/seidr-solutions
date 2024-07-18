double double_the_difference(vector<float> lst) {
    double sum = 0.0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}