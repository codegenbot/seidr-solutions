```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

std::vector<double> toStdVector(std::initializer_list<double> il) {
    return std::vector<double>(il);
}

double poly(std::vector<double> xs, double x){
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(std::vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly(toStdVector({xs[1], xs.back()}), x); 
    }
    std::ostringstream oss;
    oss << fixed << setprecision(6) << x;
    return stod(oss.str());
}

int main() {
    std::vector<double> xs = {1, -6, 11, -6};
    double zero = find_zero(xs);
    std::cout << "Zero is: " << zero << std::endl; 
    return 0;
}