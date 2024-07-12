#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    
    for (int i = 1; i < numbers.size(); ++i) {
        if (fabs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
  
    float threshold = 1.0;
    bool result = has_close_elements(a, threshold);
  
    return 0;
}