#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        string str = to_string(i);
        long long j = 1;
        while(str.length() + 1 <= n){
            j *= 10;
            str += to_string(j % 10);
            if ((stoi(str.substr(0, 1)) == 1 || str.back() == '1')) count++;
        }
    }
    return count > 0;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
}