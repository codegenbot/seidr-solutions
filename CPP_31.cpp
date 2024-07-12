```cpp
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    string str = to_string(num);
    cout << (is_prime(stoi(str)) ? "True" : "False") << endl;
    return 0;