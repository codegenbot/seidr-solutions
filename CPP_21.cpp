#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    
    vector<float> rescaled_numbers;
    for(int i=0; i<numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    vector<float> expected_result = {0.0, 0.25, 0.5, 0.75, 1.0};
    
    bool result = std::equal(rescaled_numbers.begin(), rescaled_numbers.end(), expected_result.begin());
    
    if(result){
        cout << "The rescaled numbers are correct." << endl;
    } else {
        cout << "The rescaled numbers are incorrect." << endl;
    }

    assert(std::equal(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}).begin(), 
                      rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}).end(), 
                      {0.25, 0.0, 1.0, 0.5, 0.75}.begin()));

    return 0;
}