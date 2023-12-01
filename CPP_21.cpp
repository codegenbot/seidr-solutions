vector<float> rescale_to_unit(vector<float> numbers){
    float minNum = numbers[0];
    float maxNum = numbers[0];
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < minNum){
            minNum = numbers[i];
        }
        if(numbers[i] > maxNum){
            maxNum = numbers[i];
        }
    }
    vector<float> rescaledNumbers;
    for(int i=0; i<numbers.size(); i++){
        float rescaledNum = (numbers[i] - minNum) / (maxNum - minNum);
        rescaledNumbers.push_back(rescaledNum);
    }
    return rescaledNumbers;
}