#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1, 3); // Initialize the first two elements of the sequence
    if (n <= 1) return result;
    
    result.push_back(2); // Add the third element to the sequence
    
    for (int i = 4; i <= n + 1; i++) {
        int val = 0;
        if (i % 2 == 0)
            val = 1 + i / 2;
        else
            val = result[i - 3] + result[i - 2] + result[i - 1];
        result.push_back(val);
    }
    
    return result;
}