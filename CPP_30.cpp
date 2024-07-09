#include <vector>
#include <float.h>

bool issame(vector<float> a,vector<float>b){
    if(a.size() != b.size())
        return false;
    for(float num : a) {
        if(std::find(b.begin(),b.end(),num) == b.end())
            return false;
    }
    return true;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}