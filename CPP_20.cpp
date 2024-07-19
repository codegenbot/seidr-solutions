bool issame(vector<float> a, vector<float> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<float> find_closest_elements(vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    int min_idx = 0;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            min_idx = i;
        }
    }
    return {numbers[min_idx], numbers[min_idx + 1]};
}