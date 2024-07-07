```
#include <string>
#include <cassert>

using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - 48; 
        }
    }
    return sum;
}