
Sure, here's the corrected code:
```
#include<iostream>
using namespace std;
double find_zero(vector<double> xs){
    double x=0;
    int i=0;
    while(i<xs.size()-1){
        if(xs[i]==0 && xs[i+1]!=0) break;
        i++;
    }
    if(i==xs.size()-1) return 0;
    x=xs[i];
    for(int j=i+1;j<xs.size();j++){
        x+=xs[j]*pow(x,j);
    }
    return x;
}

int main(){
    vector<double> coeffs;
    double solution = 0;
    while(coeffs.size() < 10){
        cout << "Enter coefficient: ";
        cin >> coeffs[coeffs.size()];
    }
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution))< 1e-3);
}
```