vector<float> rescale_to_unit(vector<float> numbers){
    float min = numbers[0];
    float max = numbers[0];
    
    // Find the minimum and maximum values in the vector
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    
    // Apply linear transform to each element in the vector
    for(int i=0; i<numbers.size(); i++){
        numbers[i] = (numbers[i] - min) / (max - min);
    }
    
    return numbers;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test the rescale_to_unit function
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled = rescale_to_unit(numbers);
    // Print the rescaled vector
    for(int i=0; i<rescaled.size(); i++){
        cout << rescaled[i] << " ";
    }
    cout << endl;

    // Test the issame function
    vector<float> a = {1.0, 2.0, 3.0};
    vector<float> b = {1.1, 2.2, 3.3};
    if(issame(a, b)){
        cout << "The vectors are the same" << endl;
    }
    else{
        cout << "The vectors are different" << endl;
    }

    return 0;
}