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
    vector<float> numbers = {4.2, -9.5, 7.8, 3.6};
    cout << "The maximum element is: " << max_element(numbers) << endl;
    return 0;
}