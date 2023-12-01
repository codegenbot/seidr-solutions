#include <iostream>
#include <string>
using namespace std;

bool isProductDivisible(string x, string n){
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    int productNum = num1 * num2;
    int productDen = den1 * den2;

    return (productNum % productDen == 0);
}

int main(){
    assert(isProductDivisible("1/5", "1/5") == false);
    
    return 0;
}