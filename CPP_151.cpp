#include <bits/stdc++.h>
using namespace std;

long long doubleTheDifference(vector<vector<int>>& vectors) {
    long long sum1 = 0;
    long long sum2 = 0;
    
    for (auto& vec : vectors) {
        long long sum3 = 0, sum4 = 0;
        
        for (int num : vec) {
            if (num % 2 == 0) {
                sum3 += num;
            } else {
                sum4 += num;
            }
        }
        
        sum1 += abs(sum3 - sum4);
    }
    
    return sum1;
}

int main() {
    vector<vector<int>> vectors = {{10,2},{-5,1,7},{3,-1,5}};
    cout << doubleTheDifference(vectors) << endl;
}