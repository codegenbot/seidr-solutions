#include <string>
using namespace std;

bool prime_length(string str) {
    int n = str.length();
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
    // Your main code here
}