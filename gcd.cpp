#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}