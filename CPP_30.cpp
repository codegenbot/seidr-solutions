#include <vector>

bool std::issame(std::vector<float> a, std::vector<float> b){
    vector<float> result;
    for(float x : a) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return (result == b);
}