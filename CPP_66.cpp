#include <iostream>
#include <string>

using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            sum += s[i];
        }
    }
    return sum;
}