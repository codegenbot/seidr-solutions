#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if (i == 1 || to_string(i).back() == '1') {
            count++;
            bool flag = false;
            string str = to_string(i);
            for (int j = 0; j < str.length(); j++) {
                if (str[j] != '1' && str[0] != '1') {
                    flag = true;
                    break;
                }
            }
            if (!flag) count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}