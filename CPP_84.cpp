#include <string>

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
    int sum = 0;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1')
            sum++;
    }
    return to_string(sum);
}