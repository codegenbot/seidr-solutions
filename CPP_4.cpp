int main() {
    float mean_absolute_deviation(vector<float> numbers);

    vector<float> input = {1.0, 2.0, 3.0, 4.0};
    float result = mean_absolute_deviation(input);
    printf("%.1f\n", result);

    return 0;
}

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float mean = 0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float mad = 0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }

    mad /= numbers.size();
    return mad;
}