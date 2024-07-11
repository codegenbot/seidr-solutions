#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool issame(vector<int> a, int k){
    sort(a.begin(), a.end(), greater<int>());
    vector<int> result(a.begin(), a.begin() + k);
    return result;
}

int main(){
    // Write your test cases here
    return 0;
}