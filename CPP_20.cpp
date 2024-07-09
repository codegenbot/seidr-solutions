#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    float minDiff = numeric_limits<float>::max();
    pair<float, float> closestPair;
    
    for(int i=0; i < numbers.size(); i++) {
        for(int j=i+1; j < numbers.size(); j++) {
            if(abs(numbers[i] - numbers[j]) < minDiff) {
                minDiff = abs(numbers[i] - numbers[j]);
                closestPair.first = numbers[i];
                closestPair.second = numbers[j];
            }
        }
    }
    
    return vector<float>(closestPair);
}