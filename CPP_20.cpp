pair<float, float> find_closest_elements(vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; ++i){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            result = {numbers[i], numbers[i+1]};
        }
    }
    return {result.first, result.second};
}

bool issame(vector<float>& v1, vector<float>& v2) {
    return (v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin()));
}

int main() {
    // Main code goes here
    return 0;
}