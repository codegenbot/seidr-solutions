float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    float mean = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float deviation_sum = 0.0;
    for (float num : numbers) {
        deviation_sum += abs(num - mean);
    }

    return deviation_sum / numbers.size();
}