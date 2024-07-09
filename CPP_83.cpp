```cpp
#include <iostream>
#include <string>
using namespace std;

int starts_one_ends(int n);

int main() {
    int n = 0; 
    cout << "Enter a positive integer: ";
    cin >> n;
    int count = starts_one_ends(n);
    string output = "The count of the numbers of " + to_string(n) + "-digit positive integers that start or end with 1 is: " + to_string(count);
    cout << output << endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        string str = to_string(i);
        bool flag = true;
        for (char c : str) {
            if (c != '1') {
                flag = false;
                break;
            }
        }
        if (!flag) {
            continue;
        }
        count++;
    }
    return count;