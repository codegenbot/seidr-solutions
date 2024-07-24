#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = numeric_limits<float>::max();
    float closest1, closest2;
    
    for(int i=0; i<numbers.size()-1; i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            float diff = abs(numbers[i]-numbers[j]);
            if(diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }
    
    return {closest1, closest2};
}