#include <vector>
#include <string>

using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << "GCD of 12 and 15 is: " << findGCD(12, 15) << endl;
    return 0;
}