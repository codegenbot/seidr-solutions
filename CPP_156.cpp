```
#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    if (n == 1) {
        return "i";
    } else if (n >= 1000) {
        return "M";
    } else if (n >= 200) {
        string roman = to_string(n / 200) + "C";
        if ((n % 200) > 0) {
            roman += "d";
        }
        return roman;
    } else if (n >= 20) {
        string roman = to_string(n / 10) + "X";
        if ((n % 10) > 0) {
            roman += "i";
        }
        return roman;
    } else {
        return "i";
    }
}