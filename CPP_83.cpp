#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            count++;
        }
        for (int j = 1; j < 10; j++) {
            if ((i == 1 && j != 1) || (j == 1 && i != 1)) {
                count++;
            }
            else {
                string num = to_string(i);
                num += to_string(j);
                if (num.length() == n) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}