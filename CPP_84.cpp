#include <string>

using namespace std;

string solve(int N) {
    string result = "";
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 0) {
            result = "0" + result;
        } else {
            result = "1" + result;
        }
        N /= 2;
    }
    return result;
}