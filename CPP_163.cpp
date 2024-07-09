#include <stdio.h>
#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = min(a, b); i <= max(a, b); i++) {
        bool isEven = false;
        int digit;
        while (i > 0) {
            digit = i % 10;
            if (digit % 2 == 0) {
                isEven = true;
                break;
            }
            i /= 10;
        }
        if (isEven) {
            result.push_back(digit);
        }
    }
    return result;
}