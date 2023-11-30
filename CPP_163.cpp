#include <vector>

vector<int> generate_integers(int a, int b) {
    vector<int> result;

    // Swap a and b if a is greater than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Iterate from a to b and add even digits to result
    for (int i = a; i <= b; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }

    return result;
}