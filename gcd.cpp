#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> result;
    int a = 12; 
    int b = 15; 

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}