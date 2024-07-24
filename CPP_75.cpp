#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime) continue;

            int num1 = i;
            while (a % num1 != 0) num1--;
            int num2 = a / num1;
            bool isNum2Prime = true;
            for (int j = 2; j * j <= num2; j++) {
                if (num2 % j == 0) {
                    isNum2Prime = false;
                    break;
                }
            }
            if (!isNum2Prime || a / num1 != num2) continue;

            int num3 = a / (i * num2);
            bool isNum3Prime = true;
            for (int j = 2; j * j <= num3; j++) {
                if (num3 % j == 0) {
                    isNum3Prime = false;
                    break;
                }
            }
            if (!isNum3Prime || a / (i * num2) != num3) continue;

            return true;
        }
    }
    return false;
}