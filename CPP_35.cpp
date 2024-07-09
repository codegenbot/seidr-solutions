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
    vector<float> numbers = {1.2, 3.4, -5.6, 7.8};
    float result = max_element(numbers);
    cout << "The maximum element is: " << abs(result) << endl;
    return 0;
}