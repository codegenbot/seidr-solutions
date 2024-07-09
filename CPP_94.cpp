```cpp
#include <vector>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst) {
        if(i > 1) {
            bool isPrime = true;
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    int sum = 0;
    while(maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    assert(skkasdkd({127, 97, 8192}) == 10);
}