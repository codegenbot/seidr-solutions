#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;

int main() {
    vector<float> a(6);
    a[0] = 1.0f; 
    a[1] = 2.0f; 
    a[2] = 3.9f; 
    a[3] = 4.0f; 
    a[4] = 5.0f; 
    a[5] = 2.2f;
    cout << has_close_elements(a, 1.0) << endl;
    return 0;
}