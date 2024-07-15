float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float total_diff = 0;
    for (float num : numbers) {
        total_diff += abs(num - mean);
    }

    return total_diff / numbers.size();
}