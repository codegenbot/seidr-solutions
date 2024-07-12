#include<string>
using namespace std;

int main() {
    int digitSum(string s) {
        int sum = 0;
        for (char c : s) {
            if (isupper(c)) {
                sum += tolower(c);
            }
        }
        return sum;
    }
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}