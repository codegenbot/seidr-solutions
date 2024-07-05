#include <vector>
#include <iostream>
using namespace std;
int basement(vector<int>& v) {
    int sum = 0;
    int result = -1;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return result;
        }
        result = i;
    }
    return result;
}