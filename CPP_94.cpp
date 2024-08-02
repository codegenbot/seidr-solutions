```c++
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            max_prime = i;
            break;
        }
    }
    int sum = 0;
    while(max_prime > 0){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

int main() {
    vector<int> lst = {127, 97, 8192};
    int result = skjkasdkd(lst);
    return 0;
}