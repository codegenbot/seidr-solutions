#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main() {
    vector<float> numbers = {10.5, -20.3, 30.2, -15.9};
    float result = max_element(numbers);
    cout << "The maximum element is: " << abs(result) << endl;
    return 0;
}