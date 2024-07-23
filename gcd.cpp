#include <vector>
#include <string> 
using namespace std;

// function declarations
vector<int> indicesOfSubstring(string text, string target);
int gcd(int a, int b);

int main() {
    int a = 48;
    int b = 18;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a,b) << endl;

    return 0;
}