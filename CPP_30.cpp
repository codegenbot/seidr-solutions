#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(const vector<float>& l){
    vector<float> positive_numbers;
    for(float num : l){
        if(num > 0){
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(abs(a[i]-b[i])>1e-4){
            return false;
        }
    }

    return true;
}