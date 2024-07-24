#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int remainder = N % 2;
        if (remainder == 1)
            binary.push_back('1');
        else
            binary.push_back('0');
        N /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}