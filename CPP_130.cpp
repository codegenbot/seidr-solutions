#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3);
    
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int last = result[i - 1];
            int prevLast = result[i - 2];
            int next = result[0] + 1;
            result.push_back(last + prevLast + next);
        }
    }
    
    return result;
}