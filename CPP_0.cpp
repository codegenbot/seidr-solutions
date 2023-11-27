bool has_close_elements(vector<float> numbers, float threshold){
    for(int i=0; i<numbers.size(); i++){
        for(int j=0; j<numbers.size(); j++){
            if(i != j && abs(numbers[i] - numbers[j]) <= threshold){
                return true;
            }
        }
    }
    return false;
}