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
    if(xs.size() % 2 != 0 || abs(xs[0]) < 1e-9) return -1; // invalid input
    double x = 1.0;
    double dx = 1e-6;
    double best_x = 0;
    double best_y = 1e9;

    for(int i = 0; i < xs.size() / 2; i++){
        double y = poly(xs, x);
        if(abs(y) < abs(best_y)){
            best_y = y;
            best_x = x;
        }
        x += dx;
    }

    return best_x;
}