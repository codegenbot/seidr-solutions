#include <vector>
using namespace std;

float std::max_element(std::vector<float> l){
    float result = l[0];
    for(float x : l) {
        if(x > result)
            result = x;
    }
    return result;
}