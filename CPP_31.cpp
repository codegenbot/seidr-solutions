```
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
    string str_num;
    cin >> str_num;
    int num = stoi(str_num);
    cout << (is_prime(num) ? "True" : "False") << endl;
}