```cpp
#include <iostream>
using namespace std;

bool is_prime(string num_str) {
    int num = stoi(num_str);
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    string num_str;
    cin >> num_str;
    cout << (is_prime(num_str) ? "True" : "False") << endl;
}