vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = abs(numbers[0] - numbers[1]);
    int min_index1 = 0;
    int min_index2 = 1;

    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                min_index1 = i;
                min_index2 = j;
            }
        }
    }

    vector<float> result;
    result.push_back(min(numbers[min_index1], numbers[min_index2]));
    result.push_back(max(numbers[min_index1], numbers[min_index2]));

    return result;
}