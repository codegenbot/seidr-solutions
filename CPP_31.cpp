```cpp
#include <iostream>
#include <string>  
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
    cin >> to_string(num);
    cout << (is_prime(stoi(to_string(num))) ? "true" : "false") << endl;
}