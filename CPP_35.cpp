#include <iostream>
#include <vector>

using namespace std;

float max_element(vector<float> l){
    float result = l[0];
    for(float x : l) {
        if(x > result)
            result = x;
    }
    return result;
}

int main() {
    vector<float> vec = {1.2, 3.4, 5.6, 7.8};
    assert(max_element(vec) == 7.8);
    return 0;
}