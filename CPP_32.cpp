#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>

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

void find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) cout << -1 << endl; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly(vector<double>(xs.begin()+1, xs.end()), x); 
    }
    cout << fixed << setprecision(2) << x << endl;
}

int main() {
    vector<double> xs; // input
    double x;
    cin >> x;
    xs.push_back(x);
    for (int i = 1; i <= 1000; i++) {
        cin >> x;
        xs.push_back(x);
    }
    find_zero(xs);
}