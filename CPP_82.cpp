```cpp
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

int prime_length(std::string s) {
    int len = 0;
    for(char c : s) {
        if(c >= '0' && c <= '9')
            len++;
    }
    return prime(stoi(s.substr(0, len)));
}

int main() {
    assert(prime_length("0") == false);
}