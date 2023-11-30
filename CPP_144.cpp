#include<stdio.h>
#include<string>
using namespace std;
bool simplify(string x,string n){
    int numerator_x = stoi(x.substr(0, x.find("/")));
    int denominator_x = stoi(x.substr(x.find("/") + 1));
    int numerator_n = stoi(n.substr(0, n.find("/")));
    int denominator_n = stoi(n.substr(n.find("/") + 1));
    
    double result = (numerator_x * denominator_n) / (denominator_x * numerator_n);
    
    if(result == (int)result) {
        return true;
    } else {
        return false;
    }
}