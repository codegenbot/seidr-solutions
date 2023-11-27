vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    vector<float> rescaled_numbers(numbers.size());
    for(int i=0; i<numbers.size(); i++){
        rescaled_numbers[i] = (numbers[i] - min_num) / (max_num - min_num);
    }
    return rescaled_numbers;
}