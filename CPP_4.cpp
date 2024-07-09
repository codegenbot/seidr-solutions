float mean_absolute_deviation(vector<float> numbers){
    float mean = 0.0;
    for (auto x : numbers) {
        mean += x;
    }
    mean /= numbers.size();

    float mad = 0.0;
    for (auto x : numbers) {
        mad += abs(x - mean);
    }
    mad /= numbers.size();
    
    return mad;
}