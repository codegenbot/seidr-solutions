#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>


bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<float> find_closest_elements(vector<float> numbers){
    float minDiff = INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff){
                minDiff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result = {num1, num2};
    return result;
}

int main() {
    assert (issame(find_closest_elements(vector<float>({1.1, 2.2, 3.1, 4.1, 5.1})), vector<float>({2.2, 3.1})));
    // Add more test cases if needed

    return 0;
}