#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> intersperse(const vector<int>& vec, int val){
    vector<int> result;
    for(const auto& num : vec){
        result.push_back(num);
        result.push_back(val);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}