#include <iostream>
#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> rescale_to_unit(vector<float> numbers); 

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

int main() {
    vector<float> numbers;
    float n;
    while (std::cin >> n){
        numbers.push_back(n);
    }
    
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    vector<float> sample = {0.1, 0.2, 0.3, 0.4, 0.5};
    if(issame(rescaled_numbers, sample)){
        std::cout << "Rescaled numbers are correct." << std::endl;
    }
    else{
        std::cout << "Rescaled numbers are incorrect." << std::endl;
    }

    return 0;
}