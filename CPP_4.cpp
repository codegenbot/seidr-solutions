float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    int size = numbers.size();

    for(int i=0; i<size; i++){
        sum += numbers[i];
    }

    mean = sum / size;

    float deviation = 0;

    for(int i=0; i<size; i++){
        deviation += abs(numbers[i] - mean);
    }

    float mad = deviation / size;

    return mad;
}