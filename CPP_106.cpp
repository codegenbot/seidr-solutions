#include <vector>
using namespace std;

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int sum(int x) {
    return x * (x + 1) / 2;
}

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(factorial(i));
        } else {
            result.push_back(sum(i));
        }
    }
    return result;
}