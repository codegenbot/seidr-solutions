bool has_close_elements(vector<float> numbers, float threshold){
    int n = numbers.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(numbers[i] - numbers[j]) < threshold){
                return true;
            }
        }
    }
    return false;
}