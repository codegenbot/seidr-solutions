vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    pair<float, float> closest_elements;

    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_elements.first = min(numbers[i], numbers[j]);
                closest_elements.second = max(numbers[i], numbers[j]);
            }
        }
    }

    vector<float> result = {closest_elements.first, closest_elements.second};
    return result;
}