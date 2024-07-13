#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (isalpha(c)) {
            switch (c) {
                case 'A':
                    count += isPrime(11);
                    break;
                case 'B':
                    count += isPrime(11);
                    break;
                case 'C':
                    count += isPrime(12);
                    break;
                case 'D':
                    count += isPrime(13);
                    break;
                case 'E':
                    count += isPrime(14);
                    break;
                case 'F':
                    count += isPrime(15);
                    break;
            }
        } else {
            int n = stoi(string(1, c));
            if (n > 1 && isPrime(n))
                count++;
        }
    }
    return count;
}