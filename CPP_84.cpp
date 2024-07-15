#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 1)
            binary.insert(0, "1");
        else
            binary.insert(0, "0");
        N /= 2;
    }
    return binary;
}