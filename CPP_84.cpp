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
    int sum = 0;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1')
            sum += 1;
    }
    return to_string(sum);
}