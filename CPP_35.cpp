#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

float findMax(vector<float> l){
    float maximum = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maximum){
            maximum = l[i];
        }
    }
    return maximum;
}

int main() {
    vector<float> nums = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    
    cout << (findMax(nums) - 124) << endl;

    assert(abs(*max_element(nums.begin(), nums.end()) - 124) < 1e-4);

    return 0;
}