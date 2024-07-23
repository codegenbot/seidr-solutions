```cpp
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

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1.0; 
    while(abs(poly(xs, x)) > 1e-9){ 
        x -= poly(xs, x)/poly(vector<double>(xs.begin()+1, xs.end()), x); 
    }
    cout << fixed << setprecision(2) << x << endl;
}

int main() {
    vector<double> input;
    cout << "Enter coefficients (space-separated): ";
    for(double &x: getline(cin) >> noskipws >> copy(cin, back_inserter(vector<double>(input)))) {
        // check if the input is a number
        if (!cin || !isdigit(cin.peek())) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter numbers separated by spaces." << endl;
            return 1; 
        }
    }
    find_zero(input);
    return 0;
}