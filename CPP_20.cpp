#include <cstddef>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            if(abs(numbers[i]-numbers[j]) < min_diff){
                min_diff = abs(numbers[i]-numbers[j]);
                closest_pair.first = min(max(numbers[i], numbers[j]), min_diff);
                closest_pair.second = closest_pair.first;
            }
        }
    }
    
    return vector<float>{closest_pair.first, closest_pair.second};
}