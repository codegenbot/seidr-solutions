#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> intersperse(const vector<int>& vec, int value){
    vector<int> result;
    for(const auto& num : vec){
        result.push_back(num);
        result.push_back(value);
    }
    result.pop_back(); // remove the extra value added at the end
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}