#include <string>

using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N & 1; // add last bit of N to sum
        N >>= 1; // right shift N by 1
    }
    return to_string(sum);
}