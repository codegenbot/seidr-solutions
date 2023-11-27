vector<float> issame(vector<float> numbers){
    vector<float> result;
    for(int i=0; i<numbers.size(); i++){
        bool same = false;
        for(int j=i+1; j<numbers.size(); j++){
            if(numbers[i] == numbers[j]){
                same = true;
                break;
            }
        }
        result.push_back(same ? 1.0 : 0.0);
    }
    return result;
}

vector<float> rescale_to_unit(vector<float> numbers){ 
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // Find the minimum and maximum numbers in the vector
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    // Apply linear transformation to rescale the numbers
    vector<float> rescaled_numbers;
    for(int i=0; i<numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main(){
    vector<float> numbers {3.0, 1.5, 4.2, 2.7, 4.2};
    
    vector<float> result_rescale = rescale_to_unit(numbers);
    for(int i=0; i<result_rescale.size(); i++){
        cout << result_rescale[i] << " ";
    }
    cout << endl;
    
    vector<float> result_issame = issame(numbers);
    for(int i=0; i<result_issame.size(); i++){
        cout << result_issame[i] << " ";
    }
    cout << endl;
    
    return 0;
}