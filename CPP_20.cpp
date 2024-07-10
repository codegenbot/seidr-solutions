#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;
    
    for(int i=0; i < numbers.size() - 1; ++i){
        for(int j=i+1; j < numbers.size(); ++j){
            float diff = numbers[j] - numbers[i];
            if(abs(diff) < abs(min_diff)){
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    
    return closest_pair;
}