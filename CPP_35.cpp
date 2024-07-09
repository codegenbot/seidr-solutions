#include <iostream>
#include <cmath>
#include <vector>

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
    // Your test code here
    vector<float> nums = {12, 4, 5, -10};
    cout << "The maximum element is: " << max_element(nums) << endl;
    return 0;
}