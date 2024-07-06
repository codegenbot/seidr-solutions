#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j < pow(10, n); j++) {
            int num = i * pow(10, n - 1) + j;
            string str = to_string(num);
            if ((stoi(str.substr(0, 1)) == 1 || str.back() == '1')) count++;
        }
    }
    return count > 0;
}

int main() {
    int n;
    cin >> n;
    cout << (starts_one_ends(n) ? "true" : "false");
}