```cpp
#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    if (n == 1) {
        return "i";
    } else if (n >= 1000) {
        return "m";
    } else if (n >= 200) {
        int k = n / 200;
        return to_string(k) + "c" + (k > 1 ? "m" : "") + string(min(3, n % 200));
    } else if (n >= 20) {
        return to_string(n / 10) + "x";
    } else {
        return "i";
    }
}