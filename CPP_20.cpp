#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    if (numbers.size() < 2)
        return result;

    pair<float, float> closest = {numbers[0], numbers[1]};
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[j] - numbers[i]) < abs(closest.second - closest.first)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    
    return {closest};
}