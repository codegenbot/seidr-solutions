#include <string>
using namespace std;

bool is_nested(string str) {
    int balance = 0;
    int max_balance = 0;
    for (char c : str) {
        if (c == '[') {
            balance++;
            if (balance > 1) {
                return true;
            }
        } else if (c == ']') {
            balance--;
            if (balance < 0) {
                balance = 0;
            }
        }
    }
    return false;
}