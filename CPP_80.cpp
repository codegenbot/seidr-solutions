#include <string>
using namespace std;

bool is_happy(string s) {
    int num = stoi(s);
    while (num != 1 && num != 4) {
        int next_num = 0;
        for (int i = 0; i < 10; i++) {
            if ((num / i) % 10 + (num % i)) 
                next_num = next_num * 16 + i;
        }
        num = next_num;
    }
    return num == 1;
}