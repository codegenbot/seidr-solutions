#include<stdio.h>
#include<math.h>
#include<vector>
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
    if(xs.size() % 2 != 0) return -1; // invalid input
    double x = 1.0;
    while(abs(poly(xs, x)) > 1e-6){
        x -= poly(xs, x)/poly(vector<double>(xs.begin(), xs.end()), x); // Newton's method
    }
    return round(x, 2);
}

int main() {
    vector<double> xs = {1, 2};
    printf("%.2f\n", find_zero(xs));  // -0.50
    xs = {-6, 11, -6, 1};
    printf("%.2f\n", find_zero(xs));  // 1.00
    return 0;
}