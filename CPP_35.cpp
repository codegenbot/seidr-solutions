#include <iostream>
#include <vector>
#include <cmath>

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(abs(l[i]) > abs(max))
            max = l[i];
    }
    return max;
}

int main(){
    cout << "The maximum element is: " << max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) << endl;
    return 0;
}