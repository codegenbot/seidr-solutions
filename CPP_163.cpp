#include <iostream>
#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        bool isEven = false;
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                isEven = true;
                break;
            }
            num /= 10;
        }
        if (isEven) {
            result.push_back(i);
        }
    }
    return result;
}