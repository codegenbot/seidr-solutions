#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 0) {
            binary.insert(0, "0");
        } else {
            binary.insert(0, "1");
        }
        N /= 2;
    }
    return binary;
}