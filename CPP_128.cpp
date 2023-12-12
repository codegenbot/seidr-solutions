#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int result = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            result *= arr[i];
        }
    }
    return abs(result);
}