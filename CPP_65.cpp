#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string result = "";
        for (int i = shift; i < n; i++)
            result += str[i];
        for (int i = 0; i < shift; i++)
            result += str[i];
        return result;
    }
}