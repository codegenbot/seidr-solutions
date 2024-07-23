#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <initializer_list>

using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly({(xs.begin()+1), (xs.end())}, x); 
    }
    return setprecision(2) << fixed << x << endl;
}

int main() {
    vector<double> xs = {1, -6, 11, -6};
    double zero = find_zero(xs);
    cout << "Zero is: " << zero << endl; 
    return 0;
}