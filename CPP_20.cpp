vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    pair<float, float> closest_pair;

    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            float diff = fabs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    vector<float> result = {closest_pair.first, closest_pair.second};
    return result;
}