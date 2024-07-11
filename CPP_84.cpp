#include <string>
#include <algorithm>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 1)
            binary += "1";
        else
            binary += "0";
        N /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}