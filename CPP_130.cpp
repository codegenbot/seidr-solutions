#include <iostream>
#include <vector>

using namespace std;

vector<int> tri(int n); // Function declaration

bool issame(vector<int> a, vector<int> b){ // Corrected function signature
    return a == b;
}

int main(){
    assert(issame(tri(1), {1, 3})); // Assertion test case
    return 0;
}

vector<int> tri(int n){
    vector<int> result;
    if(n == 0){
        result.push_back(0);
    } else if(n == 1){
        result.push_back(3);
    } else if(n == 2){
        result.push_back(1);
        result.push_back(3);
    } else {
        result.push_back(1);
        result.push_back(3);
        result.push_back(2);
        for(int i = 3; i <= n; ++i){
            if(i % 2 == 0){
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
    }
    return result;
}