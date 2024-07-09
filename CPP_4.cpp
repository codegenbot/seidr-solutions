float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(float num : numbers) {
        sum += abs(num - (sum / numbers.size()));
    }
    return sum / numbers.size();
}