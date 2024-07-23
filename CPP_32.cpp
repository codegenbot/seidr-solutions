#include <initializer_list>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double poly(initializer_list<double> xs, double x){
    double sum=0;
    for (auto i : xs) {
        sum+=i*pow(x,i);
    }
    return sum;
}

double find_zero(initializer_list<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly({xs.begin()[1], *(xs.end()-1)})/pow(x,i);
    }
    ostringstream oss;
    oss << fixed << setprecision(6) << x;
    return stod(oss.str());
}

int main() {
    initializer_list<double> xs = {1, -6, 11, -6};
    double zero = find_zero(xs);
    cout << "Zero is: " << zero << endl; 
    return 0;
}