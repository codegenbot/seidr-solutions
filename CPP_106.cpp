#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> f(int n);

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> f(int n){
    vector<int> result(n);
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= i; j++){
                factorial *= j;
            }
            result[i] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; j++){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    return equal(a.begin(), a.end(), b.begin());
}

int main(){
    int n;
    cin >> n;
    vector<int> result = f(n);
    // additional code using the result
    return 0;
}