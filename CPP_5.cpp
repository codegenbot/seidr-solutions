#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

vector<int> intersperse(const vector<int>& numbers, int delimiter){
    vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i){
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(vector<int>& a, vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> expected = {2, 2, 2, 2, 2};
    vector<int> result = intersperse({2, 2, 2}, 2);
    assert(issame(result, expected));
    
    return 0;
}