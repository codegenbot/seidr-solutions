#include<stdio.h>
#include<vector>
using namespace std;
int sum_squares(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            sum += lst[i] * lst[i]; // Square the integer entry if index is multiple of 3
        } else if (i % 4 == 0 && i % 3 != 0) {
            sum += lst[i] * lst[i] * lst[i]; // Cube the integer entry if index is multiple of 4 and not multiple of 3
        } else {
            sum += lst[i]; // Add the integer entry as is
        }
    }
    return sum;
}