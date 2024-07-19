#include <bits/stdc++.h>
using namespace std;
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}
int main() {
    vector<float> vec; 
    int n; 
    cin >> n; 
    for(int i=0; i<n; i++){
        float val; 
        cin >> val; 
        vec.push_back(val);
    }
    cout << double_the_difference(vec) << endl;
    return 0;
}