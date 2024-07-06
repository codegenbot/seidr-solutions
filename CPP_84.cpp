#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 0)
            binary.push_back('0');
        else
            binary.push_back('1');
        N /= 2;
    }
    int sum = 0;
    for (int i = 0; i < binary.length(); i++) {
        sum += (binary[i] - '0');
    }
    return to_string(sum);
}