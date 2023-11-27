vector<float> rescale_to_unit(vector<float> numbers){
    float minNum = *min_element(numbers.begin(), numbers.end());
    float maxNum = *max_element(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = (numbers[i] - minNum) / (maxNum - minNum);
    }

    return numbers;
}