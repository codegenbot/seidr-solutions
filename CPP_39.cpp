#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib(0);
    int a = 0, b = 1;
    while (true) {
        if (n == 0)
            return -1;
        fib.push_back(a);
        if (a == 2 || a == 3) {
            if (b == 4)
                return a;
            else
                n--;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
}