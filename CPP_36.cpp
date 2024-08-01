#include <stdio.h>
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i / 10 == 7 || i % 10 == 7)
            count++;
        for (int j = 13; j < n; j += 13) {
            if (j / 10 == 7 || j % 10 == 7)
                count++;
        }
    }
    return count;
}