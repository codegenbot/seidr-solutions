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
    int length = 0;
    for (char c : s)
        length++;
    return prime(length);
}

int main() {
    assert(prime(0) == false);
    std::string str;
    cin >> str;
    cout << "Prime length is: " << prime_length(str) << endl;
    return 0;
}