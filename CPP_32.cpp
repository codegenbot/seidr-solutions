#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    for (int i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        vector<double> temp(xs.size()-1);
        for (int i=1;i<xs.size();i++)
            temp[i-1]= xs[i]*pow(x,i);
        x -= poly(xs, x)/poly(temp, x); 
    }
    ostringstream oss;
    oss << fixed << setprecision(6) << x;
    return stod(oss.str());
}

int main() {
    vector<double> xs = {1, -6, 11, -6};
    double zero = find_zero(xs);
    cout << "Zero is: " << zero << endl; 
    return 0;
}