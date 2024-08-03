#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1);
    if (n == 0) return result;
    
    result.push_back(3);
    if (n <= 2) return result;
    
    for (int i = 2; i <= n; i++) {
        int x = (i % 2 == 0) ? 1 + i / 2 : result[i-1] + result[i-2] + (i+1);
        result.push_back(x);
    }
    
    return result;
}