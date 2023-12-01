#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result;
    result.push_back(min(num1, num2));
    result.push_back(max(num1, num2));
    
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));

    return 0;
}