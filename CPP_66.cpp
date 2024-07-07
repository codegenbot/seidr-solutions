#include <string>

int digitSum(string s) {
    int sum = 0;
    string result = "";
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
            result += (sum % 26) + 'a' - 1; 
        }
    }
    return 0;
}