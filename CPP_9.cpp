#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxSoFar = INT_MIN;
    
    for(int i=0; i<numbers.size(); i++){
        maxSoFar = max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }
    
    return rollingMax;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> result = rolling_max({3, 2, 3, 100, 3});
    vector<int> expected {3, 3, 3, 100, 100};
    
    cout << (issame(result, expected) ? "Pass" : "Fail") << endl;
    
    return 0;
}