#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    for (int i=0;i<xs.size();i++){
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly(vector<double>(xs.begin()+1, xs.end()), x); 
    }
    return x;
}

int main() {
    vector<double> xs = {1.0, -6.0, 11.0, -6.0, 1.0};
    double zero = find_zero(xs);
    cout << "Zero is: " << zero << endl; 
    return 0;
}