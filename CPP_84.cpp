#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        N /= 2;
    }
    return binary;
}