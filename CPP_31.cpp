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
    string s;
    cin >> s;

    int num = 0;
    string strNum = "";
    for (char c : s) {
        if (!isdigit(c)) {
            cout << "Error: Input should contain only digits." << endl;
            return 0;
        }
        strNum += c;
    }
    num = stoi(strNum);
    if(num < 2) {
        cout << "Error: Input should be greater than or equal to 2." << endl;
    } else {
        cout << (is_prime(num) ? "True" : "False") << endl;
    }
}