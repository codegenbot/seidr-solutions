#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers);

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest_elements;
    float min_diff = abs(numbers[0] - numbers[1]);
    int index1 = 0;
    int index2 = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    
    closest_elements.push_back(numbers[index1]);
    closest_elements.push_back(numbers[index2]);
    
    return closest_elements;
}