#include <cstdio>
using namespace std;

long long modp(long long n, long long p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (res * i) % p;
    }
    return res;
}

int main() {
    printf("%lld\n", modp(3, 5));
    printf("%lld\n", modp(1101, 101));
    printf("%lld\n", modp(0, 101));
    printf("%lld\n", modp(3, 11));
    printf("%lld\n", modp(100, 101));
}