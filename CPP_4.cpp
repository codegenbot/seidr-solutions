float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float sum_abs_diff = 0;
    for (float num : numbers) {
        sum_abs_diff += abs(num - mean);
    }

    return sum_abs_diff / numbers.size();
}