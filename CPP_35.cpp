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
    vector<float> vec = {10.5, 2.8, -3.9, 11.7};
    float result = max_element(vec);
    cout << "The maximum element is: " << abs(result) << endl;
    return 0;
}