#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        string words = "";
        int i = 1;
        while (i <= num) {
            if (i * 3 <= num) {
                words += "Fizz";
                i *= 3;
            } else if (i * 5 <= num) {
                words += "Buzz";
                i *= 5;
            } else {
                words = to_string(num);
                break;
            }
        }
        return words;
    }
};