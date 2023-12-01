float min_num = numbers[0];
    float max_num = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    vector<float> result;
    for(int i = 0; i < numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}