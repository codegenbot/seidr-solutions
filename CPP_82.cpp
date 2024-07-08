#include <string>
#include <cassert>

bool prime(int n) {
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

int main() {
    assert(prime(0) == false);
}